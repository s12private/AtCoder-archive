#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,a,b,K; cin>>N>>a>>b>>K;
    vector<ll> P(K);
    rep(i, K) cin>>P[i];

    vector<bool> flag(N+1);
    flag[a] = true;
    flag[b] = true;
    for(ll p : P){
        if(flag[p]){
            cout << "NO" << endl;
            return 0;
        }
        flag[p] = true;
    }
    cout << "YES" << endl;
}