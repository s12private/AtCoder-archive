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
    vector<ll> a(N);
    map<ll, ll> b;
    rep(i, N) {
        cin>>a[i];
        for(ll j=2; j*a[i]<=1e9; j*=2){
            b[a[i]*j]++;
        }
    }

    ll res = 0;
    rep(i, N){
        if(!b[a[i]]) res++, b[a[i]]++;
    }
    cout << res << endl;
}