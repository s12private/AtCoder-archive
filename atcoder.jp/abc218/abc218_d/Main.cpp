//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Point {
    ll y = 0;
    ll x = 0;

    Point(){}

    Point(ll y, ll x){
        this->y = y;
        this->x = x;
    }
};

int main() {
    ll N; cin>>N;
    map<ll, map<ll, bool>> m;
    vector<Point> p(N);
    rep(i, N) {
        ll x, y; cin>>x>>y;
        m[y][x] = true;
        p[i] = Point(y, x);
    }

    ll res = 0;
    rep(i, N){
        Point p1 = p[i];
        for(ll j=i+1; j<N; j++){
            Point p2 = p[j];

            if(p1.y == p2.y || p1.x == p2.x)
                continue;
            if(m[p2.y][p1.x] && m[p1.y][p2.x]){
                res++;
            }
        }
    }
    cout << res/2 << endl;
}