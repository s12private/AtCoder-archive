//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main() {
    ll H, W; cin>>H>>W;
    vector<string> g(H);
    rep(i, H) cin>>g[i];

    vector dp(H, vector<ll>(W));
    dp[0][0] = 1;

    ll MOD = 1e9+7;
    rep(i, H){
        rep(j, W){
            if(i+1 < H && g[i+1][j] != '#'){
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] %= MOD;
            }
            if(j+1 < W && g[i][j+1] != '#'){
                dp[i][j+1] += dp[i][j];
                dp[i][j+1] %= MOD;
            }
        }
    }
    cout << dp[H-1][W-1] << endl;
}