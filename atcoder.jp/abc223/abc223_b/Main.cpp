//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    vector<string> res;
    rep(i, S.size()) {
        S += S[0];
        S.erase(0, 1);
        res.push_back(S);
    }
    sort(res.begin(), res.end());
    cout << res[0] << endl;
    cout << res[res.size()-1] << endl;
}