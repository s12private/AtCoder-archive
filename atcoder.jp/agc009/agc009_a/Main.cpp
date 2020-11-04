#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i]>>B[i];

    ll count = 0;
    for(ll i=N-1; i>=0; i--){
        if((A[i]+count)%B[i] == 0) continue;
        count += B[i]-(A[i]+count)%B[i];
    }

    cout << count << endl;
}