#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H,N; cin>>H>>N;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i]>>B[i];

    vector<vector<ll>> dp(N+1, vector<ll>(H+1, 1e9));
    dp[0][0] = 0;
    for(ll i=0; i<N; i++){
        for(ll j=0; j<=H; j++){
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][min(j+A[i], H)] = min(dp[i+1][min(j+A[i], H)], dp[i+1][j]+B[i]);
        }
    }
    cout << dp[N][H] << endl;
}