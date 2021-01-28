#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    map<ll, ll> m;
    vector<ll> h(N);
    rep(i, N){
        ll a; cin>>a;
        m[a]++;
        h[i] = a;
    }

    map<ll, ll> r;
    ll n = 0;
    for(auto v : m){
        r[v.first] = n++;
    }

    rep(i, N){
        cout << r[h[i]] << endl;
    }
}