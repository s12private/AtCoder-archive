//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll to10(string s){
    reverse(s.begin(), s.end());
    ll res = 0;
    ll n = 1;
    for(char c : s){
        res += (c-'0')*n;
        n *= 8;
    }
    return res;
}

string to9(ll n){
    if(n == 0) return "0";
    string res = "";
    while(n > 0){
        res += (n%9)+'0';
        n /= 9;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string S; cin>>S;
    ll K; cin>>K;

    rep(i, K){
        ll n = to10(S);
        S = to9(n);
        rep(j, S.size()){
            if(S[j] == '8') S[j] = '5';
        }
    }
    cout << S << endl;
}