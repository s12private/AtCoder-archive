//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll modPow(ll x, ll n, ll MOD) {
    ll ret = 1;
    while(n > 0) {
        if(n & 1) (ret *= x) %= MOD;
        (x *= x) %= MOD;
        n >>= 1;
    }
    return ret;
}

int main() {
    ll N, K; cin>>N>>K;
    if(N == 1){
        cout << K << endl;
        return 0;
    }
    if(N == 2){
        if(K < 2)
            cout << 0 << endl;
        else
            cout << K*(K-1) << endl;
        return 0;
    }

    if(K < 3){
        cout << 0 << endl;
        return 0;
    }

    ll MOD = 1e9+7;
    ll res = (K%MOD * ((K-1)%MOD))%MOD * modPow(K-2, N-2, MOD);
    cout << res%MOD << endl;
}