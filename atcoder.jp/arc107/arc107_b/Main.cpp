#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;
    K = K<0 ? -K : K;
    vector<ll> num(2*N+1);
    for(ll n=2; n<=N*2; n++){
        num[n] = min(n-1, N*2+1-n);
    }
    ll ans = 0;
    for(ll n=K; n<=N*2; n++){
        ans += num[n] * num[n-K];
    }
    cout << ans << endl;
}