#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N, M; cin>>N>>M;
    map<ll, ll> m;
    rep(i, N){
        ll a; cin>>a;
        m[a]++;
    }

    ll t = 0;
    rep(i, M){
        ll a; cin>>a;
        if(m[a] != 0) t++;
        m[a]++;
    }

    cout << fixed << setprecision(10) << (double)t/m.size() << endl;
}