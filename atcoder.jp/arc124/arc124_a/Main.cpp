//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> n(N, K);
    vector<bool> m(2000);

    rep(i, K){
        char c; cin>>c;
        ll k; cin>>k;
        k--;
        if(c == 'L'){
            for(ll j=0; j<k; j++) n[j]--;
        }else{
            for(ll j=k+1; j<N; j++) n[j]--;
        }
        m[k] = true;
    }

    ll res = 1;
    rep(i, N){
        if(!m[i]) res *= n[i];
        res %= 998244353;
    }
    cout << res << endl;
}