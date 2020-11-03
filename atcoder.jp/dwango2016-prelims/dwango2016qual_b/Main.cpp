#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    vector<ll> K(N-1);
    rep(i, N-1) cin>>K[i];

    cout << K[0] << " ";
    for(ll i=1; i<N-1; i++){
        cout << min(K[i], K[i-1]) << " ";
    }
    cout << K.back() << " ";
}