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
    vector<ll> x(N), y(N), r(4);
    r[0] = -1e10, r[1] = -1e10, r[2] = 1e10, r[3] = 1e10;
    rep(i, N){
        cin>>x[i]>>y[i];
        chmax(r[0], x[i]+y[i]);
        chmax(r[1], x[i]-y[i]);
        chmin(r[2], x[i]+y[i]);
        chmin(r[3], x[i]-y[i]);
    }

    cout << max({r[0]-r[2], r[1]-r[3]}) << endl;
}