//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> a(N), b(N);
    rep(i, N) cin>>a[i];
    rep(i, N) cin>>b[i];

    vector<ll> ma(N), mb(N);
    ll mxa = 0, mxb = 0;
    rep(i, N){
        mxa = max(mxa, a[i]);
        mxb = max(mxb, b[i]);
        ma[i] = mxa;
        mb[i] = mxb;
    }

    cout << a[0]*b[0] << endl;
    ll last = a[0]*b[0];
    for(ll i=1; i<N; i++){
        last = max(last, b[i]*ma[i]);
        cout << last << endl;
    }
}