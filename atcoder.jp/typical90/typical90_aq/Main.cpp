//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Point {
    ll x = 0;
    ll y = 0;
    ll dir = 0;

    Point(){}

    Point(ll y, ll x){
        this->y = y;
        this->x = x;
    }
};

int main() {
    ll H,W;cin>>H>>W;
    Point s,t;
    cin>>s.y>>s.x>>t.y>>t.x;
    s.y--, s.x--, t.y--, t.x--;
    vector<string> S(H);
    rep(i, H) cin>>S[i];

    vector<vector<vector<ll>>> dist(H, vector<vector<ll>>(W, vector<ll>(4, 1e10)));

    deque<Point> deq;
    rep(i, 4){
        Point p = Point(s.y, s.x); p.dir = i;
        deq.push_back(p);
        dist[s.y][s.x][i] = 0;
    }

    int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1}; //RDLU

    while(!deq.empty()){
        Point top = deq.front();
        deq.pop_front();
        for(ll i=0; i<4; i++){
            ll x = top.x + dx[i], y = top.y+dy[i];
            if(x < 0 || x >= W || y < 0 || y >= H || S[y][x] == '#') continue;
            ll cost = top.dir == i ? 0 : 1;
            if(top.y == s.y && top.x == s.x) cost = 0;
            Point p; p.x = x, p.y = y, p.dir = i;
            if(dist[y][x][i] <= dist[top.y][top.x][top.dir]+cost) continue;
            if(cost == 0) deq.push_front(p);
            else deq.push_back(p);
            dist[y][x][i] = dist[top.y][top.x][top.dir]+cost;
        }
    }

    ll res = 1e9;
    rep(i, 4){
        chmin(res, dist[t.y][t.x][i]);
    }
    cout << res << endl;
}