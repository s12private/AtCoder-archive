#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> h(N);
    rep(i, N) cin>>h[i];
    vector<ll> dp(N, 1e9);
    dp[0] = 0;

    rep(i, N){
        for(ll j=1; j<=K; j++){
            if(i+j >= N) break;
            dp[i+j] = min(dp[i+j], abs(h[i+j]-h[i])+dp[i]);
        }
    }
    cout << dp[N-1] << endl;
}