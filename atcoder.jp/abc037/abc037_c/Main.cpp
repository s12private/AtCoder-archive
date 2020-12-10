#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;

    vector<ll> a(N+1);
    rep(i, N){
        ll v; cin>>v;
        a[i+1] = a[i] + v;
    }

    ll sum = 0;
    rep(i, N-K+1){
        sum += a[i+K] - a[i];
    }
    cout << sum << endl;
}