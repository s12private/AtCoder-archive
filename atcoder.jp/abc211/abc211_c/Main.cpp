//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;

    ll ans = 1;
    map<char, ll> m, n;

    string t = "-chokudai";
    rep(i, t.size()){
        m[t[i]] = i-1;
    }
    ll mod = 1e9+7;
    for(char c : S){
        if(c == 'c'){
            n[c]++;
        }else{
            if(n[t[m[c]]] != 0){
                n[c] += n[t[m[c]]];
            }
            //cout << c << n[t[m[c]]] << endl;
        }

        n[c] %= mod;
    }
    cout << n['i']%mod << endl;
}