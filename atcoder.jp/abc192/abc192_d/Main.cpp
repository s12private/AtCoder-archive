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
    string X; cin>>X;
    ll M; cin>>M;
    ll mx = 0;
    for(ll i=0; i<X.size(); i++){
        chmax(mx, (ll)(X[i]-'0'));
    }
    if(X.size() == 1){
        if(X[0]-'0' <= M){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
        return 0;
    }
    ll n = pow(M/((X[0]-'0')), 1.0/(X.size()-1));
    for(ll i=n; i>=mx+1; i--){
        ll sum = 0;
        for(ll j=0; j<X.size(); j++){
            sum += (X[X.size()-j-1]-'0') * pow(i, j);
        }
        if(sum <= M){
            cout << i-mx << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}