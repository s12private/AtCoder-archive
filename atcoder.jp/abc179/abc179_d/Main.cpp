#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K, MOD = 998244353;
    cin >> N >> K;
    vector<ll> l(K), r(K);
    rep(i, K){
        cin>>l[i]>>r[i];
    }
    vector<ll> sum(N+1);
    sum[1] = 1;
    vector<ll> dp(N+1);
    dp[1] = 1;
    for(ll i=2; i<=N; i++){
        rep(j, K){
            ll left = max(0ll, i-r[j]-1);
            ll right = i-l[j];
            if(right < 0) continue;
            dp[i] += (sum[right] - sum[left])%MOD < 0 ? MOD + (sum[right] - sum[left])%MOD : (sum[right] - sum[left])%MOD;
            dp[i] %= MOD;
        }
        sum[i] = (dp[i] + sum[i-1]) % MOD;
        sum[i] %= MOD;
    }
    cout << dp[N] << endl;
}