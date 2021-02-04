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
    ll N, Q; cin>>N>>Q;
    vector<ll> a(N+1);
    rep(i, Q){
        ll l, r; cin>>l>>r;
        a[--l]++, a[r]--;
    }
    rep(i, N-1) a[i+1] += a[i];

    rep(i, N){
        cout << a[i]%2;
    }
    cout << endl;
}