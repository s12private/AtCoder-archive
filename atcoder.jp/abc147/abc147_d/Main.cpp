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
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    vector<vector<ll>> b(60, vector<ll>(2));
    for(auto a : A){
        for(ll i=0; i<60; i++){
            b[i][a>>i&1]++;
        }
    }

    ll res = 0, MOD = 1e9+7;
    rep(i, 60) {
        ll sum = b[i][0] * b[i][1];
        rep(j, i) sum *= 2, sum %= MOD;
        res += sum;
        res %= MOD;
    }
    cout << res << endl;
}