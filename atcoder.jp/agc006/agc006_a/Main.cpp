#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string s, t; cin>>s>>t;
    ll mx = 0;
    rep(i, N){
        ll count = 0;
        for(ll j=0; j<N-i; j++){
            if(s[i+j] == t[j]) count++;
            else break;
        }
        mx = max(mx, count);
    }
    cout << 2*N-mx << endl;
}