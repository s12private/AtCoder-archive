//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    map<char, ll> m;
    m['0'] = 0, m['1'] = 1, m['6'] = 9, m['8'] = 8, m['9'] = 6;

    for(ll i=S.size()-1; i>=0; i--){
        cout << m[S[i]];
    }
    cout << endl;
}