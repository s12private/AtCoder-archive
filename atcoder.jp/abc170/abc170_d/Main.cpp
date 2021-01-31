//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    ll max = 0;
    rep(i, N){
        cin>>A[i];
        chmax(max, A[i]);
    }

    vector<ll> b(max+1);
    rep(i, N){
        for(ll j=1; j*A[i]<=max; j++){
            b[j*A[i]]++;
        }
    }

    ll res = 0;
    rep(i, N){
        if(b[A[i]] == 1) res++;
    }

    cout << res << endl;
}