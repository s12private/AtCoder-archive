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
    ll N, K; cin>>N>>K;
    vector<ll> A(N);
    ll mx = 0;
    rep(i, N){
        cin>>A[i];
        chmax(mx, A[i]);
    }

    ll l = 0, r = mx;
    while(r-l > 1){
        ll m = (l+r)/2.0;
        ll count = 0;
        for(ll a : A) count += ceil((double)a/m) - 1;
        if(count <= K) r = m;
        else l = m;
    }

    cout << (ll)ceil((l+r)/2.0) << endl;
}