//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll A, B; cin>>A>>B;
    string S; cin>>S;
    bool flag = S[A] != '-';

    rep(i, A){
        if(S[i] == '-') flag = true;
    }
    rep(i, B){
        if(S[i+1+A] == '-') flag = true;
    }

    cout << (flag ? "No" : "Yes") << endl;
}