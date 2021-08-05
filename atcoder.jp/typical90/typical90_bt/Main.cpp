//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll H, W;
vector<string> c;

struct Point {
    ll x = 0;
    ll y = 0;

    Point(){}

    Point(ll y, ll x){
        this->x = x;
        this->y = y;
    }
};

ll mx = -1;
void dfs(Point s, Point n, vector<vector<bool>> reached, ll dist){
    ll res = -1;
    reached[n.y][n.x] = true;
    int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1}; //RDLU

    //cout << n.y << " " << n.x << endl;
    for(int i=0; i<4; i++){
        Point p = Point(n.y+dy[i], n.x+dx[i]);
        if(p.x < 0 || p.x >= W || p.y < 0 || p.y >= H || c[p.y][p.x] == '#')
            continue;
        if(p.x == s.x && p.y == s.y && dist+1 >= 3){
            chmax(res, dist+1);
        }
        if(reached[p.y][p.x]) continue;
        dfs(s, p, reached, dist+1);
    }
    chmax(mx, res);
}

int main() {
    cin>>H>>W;
    c = vector<string>(H);
    rep(i, H) cin>>c[i];

    rep(i, H){
        rep(j, W){
            Point start = Point(i, j);
            if(c[i][j] == '#') continue;
            vector<vector<bool>> reached(H, vector<bool>(W));
            reached[i][j] = true;

            dfs(start, start, reached, 0);
        }
    }
    cout << mx << endl;
}