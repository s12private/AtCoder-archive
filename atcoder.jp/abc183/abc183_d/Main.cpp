#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, W; cin>>N>>W;
    vector<ll> imos(2e6);
    rep(i, N){
        ll S,T,P; cin>>S>>T>>P;
        imos[S] += P;
        imos[T] -= P;
    }

    for(ll i=1; i<imos.size(); i++){
        imos[i] += imos[i-1];
    }


    for(ll i=0; i<imos.size(); i++){
        if(imos[i] > W){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}