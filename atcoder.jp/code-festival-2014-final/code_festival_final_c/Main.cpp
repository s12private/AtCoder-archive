#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    vector<ll> a;
    for(ll i=10; i<=10000; i++){
        ll t = 0;
        string s = to_string(i);
        for(ll j=0; j<s.size(); j++){
            ll n = s[s.size()-j-1] - '0';
            t += n*pow(i, j);
        }
        a.push_back(t);
    }

    ll A; cin>>A;
    rep(i, a.size()){
        if(a[i] == A){
            cout << i+10 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}