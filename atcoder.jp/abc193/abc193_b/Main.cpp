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
    vector<ll> A(N), P(N), X(N);
    ll mn = 1e11;
    rep(i, N){
        cin>>A[i]>>P[i]>>X[i];
        if(X[i]-A[i] > 0) chmin(mn, P[i]);
    }

    if(mn == 1e11) mn = -1;
    cout << mn << endl;
}