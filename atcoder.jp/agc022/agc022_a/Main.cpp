#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    string S; cin>>S;

    map<char, ll> m;
    rep(i, S.size()){
        m[S[i]]++;
    }
    for(char i='a'; i<='z'; i++){
        if(m[i] == 0){
            cout << S << i << endl;
            return 0;
        }
    }

    string s = S;
    if(s == "zyxwvutsrqponmlkjihgfedcba"){
        cout << "-1" << endl;
        return 0;
    }
    next_permutation(s.begin(), s.end());
    rep(i, s.size()){
        if(s[i] != S[i]){
            cout << s.substr(0, i+1);
            return 0;
        }
    }
}