//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,D,K; cin>>N>>D>>K;
    vector<pair<ll, ll>> p(D);
    rep(i, D) cin>>p[i].first>>p[i].second;
    rep(i, K){
        ll S, T; cin>>S>>T;
        rep(i, D){
            ll l = p[i].first;
            ll r = p[i].second;
            if(S >= l && S <= r){
                if(T >= l && T <= r){
                    cout << i+1 << endl;
                    break;
                }
                S = S > T ? l : r;
            }
        }
    }
}