#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

vector<bool> primeTable(ll n) {
    vector<bool> prime(n + 1, true);
    if(n >= 0) prime[0] = false;
    if(n >= 1) prime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(!prime[i]) continue;
        for(ll j = i + i; j <= n; j += i) {
            prime[j] = false;
        }
    }
    return prime;
}

int main() {
    vector<bool> p = primeTable(1e5);
    vector<ll> count(1e5+1);
    rep(i, 1e5+1){
        if((i+1)%2 != 0) continue;
        if(p[(i+1)/2] && p[i]){
            if(i != 0) count[i] = count[i-1] + 1;
        }
    }

    for(ll i=1; i<=1e5; i++){
        count[i] += count[i-1];
    }

    ll Q; cin>>Q;
    rep(i, Q){
        ll l, r; cin>>l>>r;
        cout << count[r]-count[l-1] << endl;
    }
}