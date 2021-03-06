#define _GLIBCXX_DEBUG
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
    ll mn = 1e7;
    vector<pair<ll, ll>> p(N);
    rep(i, N){
        cin>>p[i].first>>p[i].second;
        chmin(mn, p[i].first + p[i].second);
    }

    ll res = 1e7;
    for(ll i=0; i<N; i++){
        for(ll j=i; j<N; j++){
            if(i == j){
                chmin(res, p[i].first + p[j].second);
            }else{
                chmin(res, max(p[i].first, p[j].second));
                chmin(res, max(p[i].second, p[j].first));
            }
        }
    }
    cout << res << endl;
}