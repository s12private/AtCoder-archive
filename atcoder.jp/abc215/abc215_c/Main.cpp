//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    ll K; cin>>K;
    sort(S.begin(), S.end());
    vector<string> s;
    do {
        s.push_back(S);
    }while(next_permutation(S.begin(), S.end()));

    sort(s.begin(), s.end());
    
    cout << s[K-1] << endl;
}