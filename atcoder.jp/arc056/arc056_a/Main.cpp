#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll A,B,K,L; cin>>A>>B>>K>>L;

    ll ans = 0;
    if(B/L < A){
        ans += B*(K/L);
        K %= L;
        if(B < A*K){
            ans += B;
        }else{
            ans += A*K;
        }
    }else{
        ans += K*A;
    }

    cout << ans << endl;
}