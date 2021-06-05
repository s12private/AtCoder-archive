#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll H,W,A,B, res = 0;
void dfs(ll h, ll w, ll a, ll b, vector<vector<bool>> v){
    if(a < 0 || b < 0) return;
    if(w >= W && h < H-1) w = 0, h++;
    if(a == 0 && b == 0){
        res++;
        return;
    }
    if(h >= H && w >= W) return;
    if(v[h][w]){
        dfs(h, w+1, a, b, v);
        return;
    }


    v[h][w] = true;
    dfs(h, w+1, a, b-1, v);
    if(w+1 < W && !v[h][w+1]){
        v[h][w+1] = true;
        dfs(h, w+2, a-1, b, v);
        v[h][w+1] = false;
    }
    if(h+1 < H && !v[h+1][w]){
        v[h+1][w] = true;
        dfs(h, w+1, a-1, b, v);
        v[h+1][w] = false;
    }
}

int main() {
    cin>>H>>W>>A>>B;

    vector<vector<bool>> v(H, vector<bool>(W, false));
    dfs(0, 0, A, B, v);
    cout << res << endl;
}