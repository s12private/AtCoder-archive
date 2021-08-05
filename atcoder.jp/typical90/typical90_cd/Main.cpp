//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

// mod. m での a の逆元 a^{-1} を計算する
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main() {
    ll L, R; cin>>L>>R;
    ll MOD = 1e9+7;
    ll res = 0;
    for(ll i=1; i<=19; i++){
        ll l = max((ll)pow(10, i-1), L);
        ll r = min((ll)pow(10, i)-1, R);
        if(l > r) continue;
        ll sum = (((r-l+1)%MOD)*((l+r)%MOD))%MOD * modinv(2, MOD)%MOD;
        res += sum%MOD*i%MOD;
        res %= MOD;
    }
    cout << res << endl;
}