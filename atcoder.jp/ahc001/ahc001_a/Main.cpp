//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll width = 10000, height = 10000;

struct Point {
    ll x = 0;
    ll y = 0;
    ll r = 0;

    Point(){}

    Point(ll x, ll y, ll r){
        this->x = x;
        this->y = y;
        this->r = r;
    }
};

bool isOK(pair<Point, Point> a, pair<Point, Point> b){
    ll aW = a.second.x - a.first.x;
    ll aH = a.second.y - a.first.y;
    ll bW = b.second.x - b.first.x;
    ll bH = b.second.y - b.first.y;

    double aCenterX = a.first.x + aW/2.0;
    double aCenterY = a.first.y + aH/2.0;
    double bCenterX = b.first.x + bW/2.0;
    double bCenterY = b.first.y + bH/2.0;

    bool isOver = (abs(aCenterX - bCenterX) < aW/2.0+bW/2.0)
            &&  (abs(aCenterY - bCenterY) < aH/2.0+bH/2.0);
    return !isOver;
}

ll calcR(pair<Point, Point> a){
    ll aW = a.second.x - a.first.x;
    ll aH = a.second.y - a.first.y;
    return aW*aH;
}

bool isContain(pair<Point, Point> p, Point need){
    Point ab = p.first;
    Point cd = p.second;
    double x = need.x+0.5;
    double y = need.y+0.5;
    return (ab.x <= x && cd.x >= x && ab.y <= y && cd.y >= y);
}

pair<Point, Point> getRight(pair<Point, Point> p, Point need){
    if(p.first.x < width && p.second.x < width) {
        p.first.x++, p.second.x++;
        if(!isContain(p, need)) p.first.x--, p.second.x--;
    }
    return p;
}

pair<Point, Point> getLeft(pair<Point, Point> p, Point need){
    if(p.first.x > 0 && p.second.x > 0) {
        p.first.x--, p.second.x--;
        if(!isContain(p, need)) p.first.x++, p.second.x++;
    }
    return p;
}

pair<Point, Point> getUp(pair<Point, Point> p, Point need){
    if(p.first.y > 0 && p.second.y > 0) {
        p.first.y--, p.second.y--;
        if(!isContain(p, need)) p.first.y++, p.second.y++;
    }
    return p;
}

pair<Point, Point> getDown(pair<Point, Point> p, Point need){
    if(p.first.y < height && p.second.y < height) {
        p.first.y++, p.second.y++;
        if(!isContain(p, need)) p.first.y--, p.second.y--;
    }
    return p;
}

int main() {
    ll n; cin>>n;
    vector<pair<Point, Point>> pr(n);
    vector<pair<ll, ll>> r(n);
    vector<pair<ll, ll>> diff(n);
    vector<Point> need(n);
    rep(i, n){
        cin>>pr[i].first.x>>pr[i].first.y>>pr[i].first.r;
        pr[i].second = pr[i].first;
        pr[i].second.x++, pr[i].second.y++;
        r[i] = make_pair(pr[i].first.r, i);
        need[i] = pr[i].first;
    }

    sort(r.rbegin(), r.rend());

    bool updated = true;
    while(updated){
        updated = false;
        for(auto pa : r){
            ll i = pa.second;
            Point ab = pr[i].first;
            if(ab.x > 0) {
                ab.x--;
                bool flag = false;
                ll dif = abs(ab.r - calcR(pr[i]));
                rep(j, n) {
                    if (i == j) continue;
                    if(!isOK(make_pair(ab, pr[i].second), pr[j])) flag = true;
                }
                if(!flag){
                    pr[i].first = ab;
                    ll now = abs(ab.r - calcR(pr[i]));
                    if(now > dif){
                        ab.x++;
                        pr[i].first = ab;
                    }else{
                        updated = true;
                    }
                    dif = now;
                }else{
                    ab.x++;
                }
            }
            if(ab.y > 0) {
                ab.y--;
                bool flag = false;
                ll dif = abs(ab.r - calcR(pr[i]));
                rep(j, n) {
                    if (i == j) continue;
                    if(!isOK(make_pair(ab, pr[i].second), pr[j])) flag = true;
                }
                if(!flag){
                    pr[i].first = ab;
                    ll now = abs(ab.r - calcR(pr[i]));
                    if(now > dif){
                        ab.y++;
                        pr[i].first = ab;
                    }else{
                        updated = true;
                    }
                    dif = now;
                }else{
                    ab.y++;
                }
            }

            Point cd = pr[i].second;
            if(cd.x < width) {
                cd.x++;
                bool flag = false;
                ll dif = abs(ab.r - calcR(pr[i]));
                rep(j, n) {
                    if (i == j) continue;
                    if(!isOK(make_pair(pr[i].first, cd), pr[j])) flag = true;
                }
                if(!flag){
                    pr[i].second = cd;
                    ll now = abs(ab.r - calcR(pr[i]));
                    if(now > dif){
                        cd.x--;
                        pr[i].second = cd;
                    }else{
                        updated = true;
                    }
                    dif = now;
                }else{
                    cd.x--;
                }
            }
            if(cd.y < height) {
                cd.y++;
                bool flag = false;
                ll dif = abs(ab.r - calcR(pr[i]));
                rep(j, n) {
                    if (i == j) continue;
                    if(!isOK(make_pair(pr[i].first, cd), pr[j])) flag = true;
                }
                if(!flag){
                    pr[i].second = cd;
                    ll now = abs(ab.r - calcR(pr[i]));
                    if(now > dif){
                        cd.y--;
                        pr[i].second = cd;
                    }else{
                        updated = true;
                    }
                    dif = now;
                }else{
                    cd.y--;
                }
            }

        }
    }

    rep(i, n){
        diff[i].first = abs(pr[i].first.r - calcR(pr[i]));
        diff[i].second = i;
    }

    sort(diff.begin(), diff.end());
    for(auto pa : diff){
        ll i = pa.second;
        ll dif = pa.first;
        bool updated = true;
        while(updated){
            updated = false;
            pair<Point, Point> moved = pr[i];
            if(moved.first.y > 0) {
                moved.first.y--;
                bool flag = abs(moved.first.r - calcR(pr[i])) < abs(moved.first.r - calcR(moved));
                rep(j, n) {
                    if (i == j) continue;
                    if (!isOK(moved, pr[j])) {
                        bool upOK = true;
                        pair<Point, Point> up = getUp(pr[j], need[j]);
                        rep(k, n) {
                            if (j == k) continue;
                            pair<Point, Point> target = pr[k];
                            if (k == i) target = moved;
                            if (!isOK(up, target)) upOK = false;
                        }
                        if (upOK) {
                            pr[j] = up;
                        }
                        if (!isOK(moved, pr[j])) flag = true;
                    }
                }
                if (!flag) {
                    pr[i] = moved;
                    dif = abs(moved.first.r - calcR(moved));
                    updated = true;
                }
            }

            moved = pr[i];
            if(moved.first.x > 0){
                moved.first.x--;
                bool flag = abs(moved.first.r - calcR(pr[i])) < abs(moved.first.r - calcR(moved));
                rep(j, n) {
                    if (i == j) continue;
                    if (!isOK(moved, pr[j])) {
                        bool leftOK = true;
                        pair<Point, Point> left = getLeft(pr[j], need[j]);
                        rep(k, n) {
                            if (j == k) continue;
                            pair<Point, Point> target = pr[k];
                            if (k == i) target = moved;
                            if (!isOK(left, target)) leftOK = false;
                        }
                        if (leftOK) {
                            pr[j] = left;
                        }
                        if (!isOK(moved, pr[j])) flag = true;
                    }
                }
                if (!flag) {
                    pr[i] = moved;
                    updated = true;
                }
            }


            moved = pr[i];
            if(moved.second.y < height){
                moved.second.y++;
                bool flag = abs(moved.first.r - calcR(pr[i])) < abs(moved.first.r - calcR(moved));
                rep(j, n) {
                    if (i == j) continue;
                    if (!isOK(moved, pr[j])) {
                        bool downOK = true;
                        pair<Point, Point> down = getDown(pr[j], need[j]);
                        rep(k, n) {
                            if (j == k) continue;
                            pair<Point, Point> target = pr[k];
                            if (k == i) target = moved;
                            if (!isOK(down, target)) downOK = false;
                        }
                        if (downOK) {
                            pr[j] = down;
                        }
                        if (!isOK(moved, pr[j])) flag = true;
                    }
                }
                if (!flag) {
                    pr[i] = moved;
                    updated = true;
                }
            }

            moved = pr[i];
            if (moved.second.x < width){
                moved.second.x++;
                bool flag = abs(moved.first.r - calcR(pr[i])) < abs(moved.first.r - calcR(moved));
                rep(j, n) {
                    if (i == j) continue;
                    if (!isOK(moved, pr[j])) {
                        bool rightOK = true;
                        pair<Point, Point> right = getRight(pr[j], need[j]);
                        rep(k, n) {
                            if (j == k) continue;
                            pair<Point, Point> target = pr[k];
                            if (k == i) target = moved;
                            if (!isOK(right, target)) rightOK = false;
                        }
                        if (rightOK) {
                            pr[j] = right;
                        }
                        if (!isOK(moved, pr[j])) flag = true;
                    }
                }
                if (!flag) {
                    pr[i] = moved;
                    updated = true;
                }
            }
        }
    }

    rep(i, n){
        cout << pr[i].first.x << " " << pr[i].first.y << " " << pr[i].second.x << " " << pr[i].second.y << endl;
    }
}