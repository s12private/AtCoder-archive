#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    ll ans = 0;
    for(ll i=0; i<N; i++){
        ll A, B; cin>>A>>B;
        ans += ((B-A+1)*(A+B))/2;
    }

    cout << ans << endl;
}