#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    string S; cin>>S;

    ll ans = 0;
    rep(i, S.size()){
        if(S[i] == 'U'){
            ans += S.size()-(i+1) + i*2;
        }else{
            ans += i + (S.size()-(i+1))*2;
        }
    }

    cout << ans << endl;
}