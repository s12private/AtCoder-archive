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
    ll sum = 0;
    rep(i, N) {
        cin >> A[i];
        sum += A[i];
    }
    ll a = 0;
    for(ll i=1; i<N; i+=2){
        a += A[i];
    }
    ll x = sum-2*(a);
    cout << x << " ";
    rep(i, N-1){
        x = 2*A[i]-x;
        cout << x;
        if(i != N-2) cout << " ";
    }
    cout << endl;
}