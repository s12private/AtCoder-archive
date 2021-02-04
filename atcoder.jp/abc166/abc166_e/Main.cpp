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
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    vector<ll> sum(N);
    map<ll, ll> dif;
    rep(i, N){
        sum[i] = A[i]+i+1;
        dif[-A[i]+i+1]++;
    }

    ll res = 0;
    rep(i, N){
        res += dif[sum[i]];
    }

    cout << res << endl;
}