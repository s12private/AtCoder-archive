//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll modPow(ll x, ll n, const ll &p) {
    ll ret = 1;
    while(n > 0) {
        if(n & 1) (ret *= x) %= p;
        (x *= x) %= p;
        n >>= 1;
    }
    return ret;
}

int main() {
    ll n,a,b; cin>>n>>a>>b;
    ll MOD = 1e9+7;
    ll t = modPow(2, n, MOD);
    t--;

    ll x = 1;
    for(ll i=0; i<a; i++){
        x *= n-i;
        x %= MOD;
    }
    ll y = 1;
    for(ll i=1; i<=a; i++){
        y *= i;
        y %= MOD;
    }
    y = modPow(y, MOD-2, MOD)%MOD;
    ll p = (x*y)%MOD;

    x = 1;
    for(ll i=0; i<b; i++){
        x *= n-i;
        x %= MOD;
    }
    y = 1;
    for(ll i=1; i<=b; i++){
        y *= i;
        y %= MOD;
    }
    y = modPow(y, MOD-2, MOD)%MOD;
    p += (x*y)%MOD;
    t -= p%MOD;
    t = t < 0 ? t+MOD : t;
    cout << t << endl;
}