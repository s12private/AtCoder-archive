//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i];
    rep(i, N) cin>>B[i];

    ll res = 0;
    rep(i, N){
        res += A[i]*B[i];
    }
    if(res == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}