#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,L; cin>>N>>L;

    vector<ll> dp(N+1);
    dp[0] = 1;

    for(ll i=1; i<=N; i++){
        dp[i] = dp[i-1] + (i-L >= 0 ? dp[i-L] : 0);
        dp[i] %= (ll)1e9+7;
    }
    cout << dp[N] << endl;
}