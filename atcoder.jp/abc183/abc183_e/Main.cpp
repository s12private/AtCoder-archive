//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll x[2005][2005], y[2005][2005], z[2005][2005];

int main() {
    ll H, W; cin>>H>>W;
    vector<string> S(H);
    rep(i, H) cin>>S[i];

    vector dp(H, vector<ll>(W));
    dp[0][0] = 1;
    ll MOD = 1e9+7;

    for(ll i=0; i<H; i++){
        for(ll j=0; j<W; j++){
            if(S[i][j] == '#') continue;
            dp[i][j] += (x[i][j]+y[i][j]+z[i][j])%MOD;
            dp[i][j] %= MOD;
            x[i][j+1] += dp[i][j] + x[i][j];
            x[i][j+1] %= MOD;
            y[i+1][j] += dp[i][j] + y[i][j];
            y[i+1][j] %= MOD;
            z[i+1][j+1] += dp[i][j] + z[i][j];
            z[i+1][j+1] %= MOD;
        }
    }

    cout << dp[H-1][W-1]%MOD << endl;
}