#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H, W; cin>>H>>W;
    vector<string> S(H);
    rep(i, H) cin>>S[i];

    ll res = 0;
    rep(i, H){
        rep(j, W-1){
            if(S[i][j] == '.' && S[i][j+1] == '.') res++;
        }
    }

    rep(i, W){
        rep(j, H-1){
            if(S[j][i] == '.' && S[j+1][i] == '.') res++;
        }
    }
    cout << res << endl;
}