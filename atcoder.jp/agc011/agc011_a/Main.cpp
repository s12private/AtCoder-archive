#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N,C,K; cin>>N>>C>>K;
    vector<ll> T(N);
    rep(i, N) cin>>T[i];

    sort(T.begin(), T.end());
    ll t=T[0], c=1, ans=1;
    for(ll i=1; i<N; i++){
        if(c < C && T[i]-t <= K){
            c++;
        }else{
            c = 1;
            t = T[i];
            ans++;
        }
    }

    cout << ans << endl;
}