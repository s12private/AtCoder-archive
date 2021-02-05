#define _GLIBCXX_DEBUG
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
    ll N; cin>>N;
    vector<ll> a(N);
    rep(i, N) cin>>a[i];

    ll res = -1e9;
    rep(i, N){
        ll mx = -1e9, tx = -1e9;
        for(ll j=0; j<N; j++){
            if(i == j) continue;
            ll l = min(i, j), r = max(i, j);
            ll p = 0;
            ll t = 0;
            for(ll k=0; k+l<=r; k++){
                if((k+1)%2 == 0) p += a[k+l];
                else t += a[k+l];
            }
            if(mx < p){
                mx = p;
                tx = t;
            }
        }
        chmax(res, tx);
    }
    cout << res << endl;
}