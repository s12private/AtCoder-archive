#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    string S; cin>>S;
    string t = "atcoder";
    vector<vector<ll>> dp(N+1, vector<ll>(t.size()+1));
    dp[0][0] = 1;
    ll MOD = 1e9+7;
    rep(i, N){
        rep(j, t.size()+1){
            if(S[i] == t[j]) {
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= MOD;
            }
            dp[i+1][j] += dp[i][j];
            dp[i+1][j] %= MOD;
        }
    }
    cout << dp[N][t.size()]%MOD << endl;
}