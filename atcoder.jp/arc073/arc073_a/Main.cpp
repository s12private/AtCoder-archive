#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, T; cin>>N>>T;

    vector<ll> t(N);
    rep(i, N) cin>>t[i];

    ll ans = 0;
    for(ll i=1; i<N; i++){
        ans += min(t[i]-t[i-1], T);
    }

    cout << ans + T << endl;
}