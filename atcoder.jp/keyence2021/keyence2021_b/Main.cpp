//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> a(N);
    rep(i, N) cin>>a[i];

    vector<ll> count(N);
    rep(i, N){
        count[a[i]]++;
    }

    vector<ll> mn(N);
    mn[0] = count[0];
    //cout << mn[0] << endl;
    for(ll i=1; i<N; i++){
        mn[i] = min(mn[i-1], count[i]);
        //cout << mn[i] << endl;
    }

    ll res = 0;
    ll n = 0;
    for(ll i=N-1; i>=0; i--){
        if(K <= 0) break;
        if(n < mn[i]){
            res += (i+1) * min(mn[i]-n, K);
            K -= mn[i] - n;
            n = mn[i];
        }
    }

    cout << res << endl;
}