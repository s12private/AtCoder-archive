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
    ll N; cin>>N;
    vector<ll> X(N), Y(N), Z(N);
    rep(i, N) cin>>X[i]>>Y[i]>>Z[i];

    vector<vector<ll>> dp(1<<N, vector<ll>(N, 1e10));
    rep(i, N){
        if(i == 0) continue;
        dp[1<<i][i] = abs(X[i]-X[0]) + abs(Y[i]-Y[0])+ max((ll)0, Z[i]-Z[0]);
    }
    for(ll i=0; i<(1<<N); i++){
        rep(j, N){
            if(i>>j&0) continue;
            rep(k, N){
                if(i>>k&1) continue;
                chmin(dp[i|1<<k][k], dp[i][j]+abs(X[k]-X[j]) + abs(Y[k]-Y[j])+ max((ll)0, Z[k]-Z[j]));
            }
        }
    }
    cout << dp[(1<<N)-1][0] << endl;
}