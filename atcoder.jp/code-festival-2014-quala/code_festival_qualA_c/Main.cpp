#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll A, B; cin>>A>>B;

    ll ans = 0;
    bool flag = false;
    for(ll i=A; i<=B; i += flag ? 4 : 1){
        if(i%400 == 0){
            ans++;
            flag = true;
        }
        if(i%100 == 0) continue;
        if(i%4==0){
            ans++;
            flag = true;
        }
    }

    cout << ans << endl;
}