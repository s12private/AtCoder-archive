//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    vector<string> S(3);
    cin>>S[0]>>S[1]>>S[2];
    string T; cin>>T;
    rep(i, T.size()){
        ll j = T[i]-'1';
        cout << S[j];
    }
    cout << endl;
}