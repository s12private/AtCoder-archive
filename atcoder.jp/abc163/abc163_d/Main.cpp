#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll MODD = 1e9+7;

int main() {
    ll N, K; cin>>N>>K;

    ll res = 0;
    for(ll i=K; i<=N+1; i++){
        ll a = i*(2*N-(i-1))/2;
        ll add = a - (i*(i-1)/2) + 1;
        res += add;
        res %= MODD;
    }

    cout << res << endl;
}

