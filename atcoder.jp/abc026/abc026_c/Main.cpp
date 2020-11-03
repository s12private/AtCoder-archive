#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    vector<vector<ll>> B(N);
    for(ll i=1; i<N; i++){
        ll b; cin>>b;
        B[b-1].push_back(i);
    }

    vector<ll> s(N, 1);
    for(ll i=N-1; i>=0; i--){
        if(!B[i].empty()){
            ll mx = 0, mn = 10e10;
            for(ll a : B[i]){
                mx = max(mx, s[a]);
                mn = min(mn, s[a]);
            }
            s[i] = mx + mn + 1;
        }
    }

    cout << s[0] << endl;
}