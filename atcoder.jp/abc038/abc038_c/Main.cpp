#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    vector<ll> s(1e5+1);
    s[0] = 1;
    s[1] = 1;
    for(ll i=2; i<s.size(); i++){
        s[i] = s[i-1]+i;
    }

    ll N; cin>>N;
    ll before = 0;
    ll count = 0;
    ll res = 0;
    rep(i, N){
        ll a; cin>>a;
        if(before < a){
            count++;
        }else{
            res += s[count];
            count = 1;
        }
        before = a;
    }
    res += s[count];

    cout << res << endl;
}