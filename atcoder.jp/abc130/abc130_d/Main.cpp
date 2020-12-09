//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> a(N+1);
    rep(i, N){
        ll b; cin>>b;
        a[i+1] = a[i] + b;
    }

    ll ans = 0;
    for(ll i=0; i<N; i++){
        auto itr = lower_bound(a.begin()+i, a.end(), K+a[i]);
        ans += a.end() - itr;
    }

    cout << ans << endl;
}