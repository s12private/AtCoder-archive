#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> a(N), b(N+1);
    b[0] = -1;
    rep(i, N){
        a[i] = i+1;
        b[i+1] = i;
    }

    ll bef = 0;
    rep(i, M){
        ll d; cin>>d;
        if(bef == d) continue;
        b[bef] = b[d];
        b[d] = -1;
        a[b[bef]] = bef;
        bef = d;
    }
    rep(i, N){
        cout << a[i] << endl;
    }
}