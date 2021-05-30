#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,W; cin>>N>>W;
    vector<ll> w(N), v(N);
    rep(i, N) cin>>w[i]>>v[i];
    vector<vector<ll>> dp(N+1, vector<ll>(W+1));

    for(ll i=0; i<N; i++){
        for(ll j=0; j<=W; j++){
            if(j-w[i] >= 0){
                chmax(dp[i+1][j], dp[i][j-w[i]]+v[i]);
            }
            chmax(dp[i+1][j], dp[i][j]);
        }
    }

    ll res = 0;
    rep(i, W+1){
        chmax(res, dp[N][i]);
    }
    cout << res << endl;
}