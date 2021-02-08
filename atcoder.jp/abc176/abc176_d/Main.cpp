//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Point {
    ll x = 0;
    ll y = 0;

    Point(){}

    Point(ll x, ll y){
        this->x = x;
        this->y = y;
    }
};

int main() {
    ll H, W; cin>>H>>W;
    Point C,D;
    cin>>C.y>>C.x>>D.y>>D.x;
    C.y--, C.x--, D.y--, D.x--;
    vector<string> S(H);
    rep(i, H) cin>>S[i];
    vector<vector<ll>> cnt(H, vector<ll>(W, -1));
    vector<vector<bool>> reached(H, vector<bool>(W));

    deque<Point> s;
    s.push_front(C);
    cnt[C.y][C.x] = 0;
    while(!s.empty()){
        Point top = s.front();
        s.pop_front();
        if(reached[top.y][top.x]) continue;
        reached[top.y][top.x] = true;
        ll dx[4] = {0, 0, 1, -1};
        ll dy[4] = {1, -1, 0, 0};
        rep(i, 4){
            ll x = top.x + dx[i];
            ll y = top.y + dy[i];
            if(x < 0 || x >= W || y < 0 || y >= H) continue;
            if(S[y][x] == '.'){
                s.push_front(Point(x, y));
                cnt[y][x] = cnt[top.y][top.x];
                //reached[y][x] = true;
            }
        }

        for(ll ddy = -2; ddy<=2; ddy++){
            for(ll ddx = -2; ddx<=2; ddx++){
                ll x = top.x + ddx;
                ll y = top.y + ddy;
                if(x < 0 || x >= W || y < 0 || y >= H) continue;
                if(cnt[y][x] != -1) continue;
                if(S[y][x] == '.'){
                    s.push_back(Point(x, y));
                    cnt[y][x] = cnt[top.y][top.x]+1;
                }
            }
        }
    }
    cout << cnt[D.y][D.x] << endl;
}