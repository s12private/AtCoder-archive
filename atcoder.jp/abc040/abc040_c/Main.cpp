#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll N; cin>>N;
    vector<ll> a(N), dp(N+1);
    rep(i, N) cin>>a[i];

    dp[0] = 0;
    dp[1] = abs(a[1]-a[0]);

    for(ll i=2; i<N; i++){
        dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]), dp[i-2] + abs(a[i]-a[i-2]));
    }

    cout << dp[N-1] << endl;
}