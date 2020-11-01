#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll a, b, c; cin>>a>>b>>c;

    ll ans = a*(a+1)/2 % 998244353;
    ans *= b*(b+1)/2 % 998244353;
    ans %= 998244353;
    ans *= c*(c+1)/2 % 998244353;
    cout << ans%998244353 << endl;
}