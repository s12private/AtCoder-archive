#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> a(M);
    rep(i, M) cin>>a[i];

    vector<bool> b(N);
    for(ll i=M-1; i>=0; i--){
        if(!b[a[i]-1]){
            cout << a[i] << endl;
            b[a[i]-1] = true;
        }
    }

    rep(i, N){
        if(!b[i]) cout << i+1 << endl;
    }
}