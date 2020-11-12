#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    vector<ll> b(N+1);
    vector<ll> c(N);
    vector<ll> d(N);
    ll mx = 0;
    rep(i, N){
        cin>>A[i];
        b[i+1] = b[i] + A[i];
        if(mx <= b[i+1]){
            mx = b[i+1];
        }
        d[i] = mx;
    }

    for(ll i=1; i<N; i++){
        c[i] = c[i-1] + b[i];
    }

    mx = 0;
    rep(i, N){
        mx = max(mx, c[i]+d[i]);
    }

    cout << mx << endl;
}