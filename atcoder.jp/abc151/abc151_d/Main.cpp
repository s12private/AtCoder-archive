#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H, W; cin>>H>>W;
    vector<string> S(H);
    rep(i, H) cin>>S[i];

    ll res = 0;
    rep(j, H) rep(k, W){
        if(S[j][k] == '#') continue;
        vector<vector<bool>> reached(H, vector<bool>(W));
        queue<pair<ll, ll>> que;
        que.push(make_pair(k, j));

        vector<vector<ll>> r(H, vector<ll>(W));
        reached[j][k] = true;
        r[j][k] = 0;
        ll mx = 0;
        while(!que.empty()){
            pair<ll, ll> top = que.front();
            que.pop();

            int dx[4] = {0, 0, -1, 1};
            int dy[4] = {-1, 1, 0, 0};
            rep(i, 4){
                ll x = top.first + dx[i];
                ll y = top.second + dy[i];
                if(x < 0 || y < 0 || x >= W || y >= H || reached[y][x] || S[y][x] == '#') continue;
                que.push(make_pair(x, y));
                reached[y][x] = true;
                r[y][x] = r[top.second][top.first] + 1;
                mx = max(r[y][x], mx);
            }
        }
        res = max(res, mx);
    }

    cout << res << endl;
}