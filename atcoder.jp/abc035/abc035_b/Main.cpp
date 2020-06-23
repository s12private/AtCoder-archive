#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string S;
    int T;
    cin>>S>>T;

    ll x=0, y=0;
    ll count = 0;
    for(char c : S){
        if(c == 'L') x--;
        if(c == 'R') x++;
        if(c == 'U') y++;
        if(c == 'D') y--;
        if(c == '?') count++;
    }

    ll ans = abs(x) + abs(y);
    if(T == 1){
        ans += count;
    }else{
        if(ans < count){
            ans = (count - ans)%2;
        }else{
            ans -= count;
        }
    }

    cout << ans << endl;

}
