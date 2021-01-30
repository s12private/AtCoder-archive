//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll N; cin>>N;

    vector<ll> c(N+1);

    for(ll i=1; i<=N; i++){
        for(ll j=1; j*i<=N; j++){
            c[j*i]++;
        }
    }

    ll res = 0;
    for(ll i=1; i<=N; i++){
        res += c[i]*i;
    }

    cout << res << endl;
}

