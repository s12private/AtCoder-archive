#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll A,B,C;
    cin>>A>>B>>C;

    A %= 1000000007;
    B %= 1000000007;
    C %= 1000000007;

    ll ans = ((A*B)%1000000007 * C)%1000000007;

    cout << ans << endl;
}
