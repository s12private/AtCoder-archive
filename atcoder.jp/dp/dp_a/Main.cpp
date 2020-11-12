#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> h(N);
    rep(i, N) cin>>h[i];

    vector<ll> dp(N);
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    for(ll i=2; i<N; i++){
        dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]), dp[i-2]+abs(h[i-2]-h[i]));
    }
    cout << dp.back() << endl;
}