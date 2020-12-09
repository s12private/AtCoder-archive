//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,X,Y; cin>>N>>X>>Y;
    vector<ll> res(N);
    X--, Y--;

    for(ll i=0; i<N; i++){
        for(ll j=i+1; j<N; j++){
            ll dis = min({abs(i-j), abs(X-i) + abs(Y-j)+1, abs(Y-i) + abs(X-j)+1});
            res[dis]++;
        }
    }

    for(ll i=1; i<N; i++) cout << res[i] << endl;
}