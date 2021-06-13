//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll A,B,C; cin>>A>>B>>C;

    if(A < 0)
        A *= C%2 == 1 ? 1 : -1;
    if(B < 0)
        B *= C%2 == 1 ? 1 : -1;

    if(A == B){
        cout << "=" << endl;
    }else if(A < B){
        cout << "<" << endl;
    }else{
        cout << ">" << endl;
    }
}