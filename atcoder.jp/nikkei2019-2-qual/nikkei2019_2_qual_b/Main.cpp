#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    map<ll, ll> m;
    rep(i, N){
        ll D; cin>>D;
        m[D]++;
        if(i == 0 && D != 0){
            cout << 0 << endl;
            return 0;
        }
    }

    if(m[0] != 1){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    ll MOD = 998244353;
    for(ll i=1; i<N; i++){
        rep(j, m[i]){
            ans *= m[i-1]%MOD;
            ans %= MOD;
        }
    }

    cout << ans << endl;
}