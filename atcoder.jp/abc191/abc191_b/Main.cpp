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
    ll N, X; cin>>N>>X;
    vector<ll> A(N), b;
    rep(i, N){
        cin>>A[i];
        if(A[i] != X) b.push_back(A[i]);
    }
    rep(i, b.size()){
        cout << b[i];
        if(i < b.size()-1) cout << " ";
    }
    cout << endl;
}