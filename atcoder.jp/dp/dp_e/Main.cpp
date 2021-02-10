//#define _GLIBCXX_DEBUG
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
    ll N, W; cin>>N>>W;
    vector<ll> w(N), v(N);
    ll V = 0;
    rep(i, N){
        cin>>w[i]>>v[i];
        V += v[i];
    }

    vector<vector<ll>> dp(N+1, vector<ll>(V+1, 1e11+1));
    dp[0][0] = 0;
    for(ll i=1; i<=N; i++){
        for(ll j=0; j<=V; j++){
            if(j-v[i-1] >= 0) dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i-1]]+w[i-1]);
            else chmin(dp[i][j], dp[i-1][j]);
        }
    }

    ll sum = 1e11+1, res = 0;
    for(ll i=0; i<=V; i++){
        if(dp[N][i] <= W){
            sum = dp[N][i];
            res = i;
        }
    }
    cout << res << endl;
}