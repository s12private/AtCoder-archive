#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string s; cin>>s;
    
    int count = 0;
    rep(i, s.size()){
        if(s[i] == '*'){
            if(s[i-1] != '0' && s[i+1] != '0'){
                s.replace(i-1, 3, ".");
                i--;
            }else{
                s.replace(i-1, 3, "0");
                i--;
            }
        }
    }

    rep(i, s.size()){
        if(s[i] != '*' && s[i] != '+' && s[i] != '0') count++;
    }

    cout << count << endl;
}
