#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string X;
    cin>>X;
    string list[4] = {"ch", "o", "k", "u"};
    for(string str : list){
        while(X.find(str) != string::npos){
            X.replace(X.find(str), str.size(), "-");
        }
    }
    
    for(char c : X){
        if(c != '-'){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
