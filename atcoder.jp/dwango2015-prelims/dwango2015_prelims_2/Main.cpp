#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string s; cin>>s;
    ll ans = 0, count = 0;
    rep(i, s.size()-1){
        if(s[i] == '2' && s[i+1] == '5'){
            count++;
            i++;
        }else{
            ans += (count*(count+1))/2;
            count = 0;
        }
    }
    cout << ans + (count*(count+1)/2) << endl;
}