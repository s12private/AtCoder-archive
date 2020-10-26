#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string s, ans = "";
    getline(cin, s);
    bool flag = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(flag) continue;
            ans += ",";
            flag = true;
        }else{
            ans += s[i];
            flag = false;
        }
    }

    cout << ans << endl;
}