#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll Q,H,S,D; cin>>Q>>H>>S>>D;
    ll N; cin>>N;
    vector<ll> v(3);
    v[0] = Q*4, v[1] = H*2, v[2] = S;
    sort(v.begin(), v.end());

    ll ans = 0;
    if(v[0] > D/2 && N>1){
        ans += D*(N/2);
        N %= 2;
    }

    ans += v[0]*N;
    cout << ans << endl;
}