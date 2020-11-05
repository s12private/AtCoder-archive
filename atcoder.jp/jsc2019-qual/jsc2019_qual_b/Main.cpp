#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll mod = 1000000007;
    ll ans = 0;
    rep(i, N){
        ll count = 0;
        ll c = 0;
        for(ll j=0; j<N; j++){
            if(j > i){
                if(A[i] > A[j]) count++;
            }
            if(A[i] > A[j]) c++;
        }

        ans += count*K%mod;
        ans %= mod;
        ans += (K-1)*K/2%mod*c%mod;
        ans %= mod;
    }
    cout << ans << endl;
}