#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> p(M);
    vector<vector<bool>> s(M, vector<bool>(10));
    rep(i, M){
        ll k; cin>>k;
        rep(j, k){
            ll t; cin>>t;
            s[i][t-1] = true;
        }
    }
    rep(i, M) cin>>p[i];

    ll ans = 0;
    for (int bit = 0; bit < (1<<N); ++bit) {
        bool flag = false;
        for(ll k=0; k<M; k++) {
            ll count = 0;
            for (int i = 0; i < N; ++i) {
                if (bit & (1<<i)) {
                    if (s[k][i]) count++;
                }
            }
            if(count%2 != p[k]) flag = true;
        }
        if(!flag) ans++;
    }
    cout << ans << endl;
}