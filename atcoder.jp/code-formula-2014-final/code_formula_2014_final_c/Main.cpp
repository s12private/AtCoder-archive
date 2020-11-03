#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string s;
    getline(cin, s);

    string str = "";
    bool flag = false;
    set<string> se;
    rep(i, s.size()){
        if(s[i] == '@'){
            se.insert(str);
            flag = true;
            str = "";
            continue;
        }

        if(s[i] == ' '){
            se.insert(str);
            flag = false;
            str = "";
            continue;
        }

        if(flag) str += s[i];
    }

    if(str != ""){
        se.insert(str);
    }

    for(string name : se){
        if(name != "" && name != " ")
            cout << name << endl;
    }
}