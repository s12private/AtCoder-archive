//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll res = 0;
    rep(i, N){
        ll mn = A[i];
        for(ll j=i; j<N; j++){
            mn = min(A[j], mn);
            res = max(res, mn*(j-i+1));
        }
    }
    cout << res << endl;
}