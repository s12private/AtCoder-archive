#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll K; cin>>K;
    if(K%9 != 0){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> dp(K+1);
    dp[0] = 1;
    for(ll i=1; i<=K; i++){
        for(ll j=1; j<=9; j++){
            if(i-j < 0) break;
            dp[i] += dp[i-j];
            dp[i] %= (ll)1e9+7;
        }
    }
    cout << dp[K] << endl;
}