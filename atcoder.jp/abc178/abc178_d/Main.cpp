#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll S; cin>>S;
    ll MOD = 1e9+7;

    vector<ll> dp(S+1);
    dp[0] = 1;
    for(ll i=0; i<=S; i++){
        for(ll j=0; j<=i-3; j++){
            dp[i] += dp[j];
            dp[i] %= MOD;
        }
    }
    cout << dp[S] << endl;
}