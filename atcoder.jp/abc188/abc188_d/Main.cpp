//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, C; cin>>N>>C;
    vector<ll> a(N), b(N), c(N);
    rep(i, N){
        cin>>a[i]>>b[i]>>c[i];
    }
    unordered_map<ll, ll> m;
    rep(i, N){
        m[a[i]] += c[i];
        m[b[i]+1] -= c[i];
    }

    vector<ll> keys;
    for(auto p : m){
        keys.push_back(p.first);
    }
    sort(keys.begin(), keys.end());
    for(ll i=0; i<keys.size()-1; i++){
        m[keys[i+1]] += m[keys[i]];
        //cout << m[keys[i]] << endl;
    }

    ll res = 0;
    for(ll i=0; i<keys.size()-1; i++){
        ll d = min(C, m[keys[i]]);
        ll e = keys[i+1]-keys[i];
        res += d*e;
    }
    cout << res << endl;
}