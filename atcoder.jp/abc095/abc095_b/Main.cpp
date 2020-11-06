#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N, X; cin>>N>>X;
    vector<ll> m(N);
    ll sum = 0;
    rep(i, N){
        cin>>m[i];
        sum += m[i];
    }
    X -= sum;
    sort(m.begin(), m.end());
    cout << N + X/m[0] << endl;

}