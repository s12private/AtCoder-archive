//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string s; cin>>s;
    ll K; cin>>K;

    vector dp(s.size()+1, vector<vector<ll>>(K+1, vector<ll>(2)));

    dp[0][0][0] = 1;
    rep(i, s.size()){
        rep(j, K+1){
            rep(k, 2){
                int n = s[i]-'0';
                rep(d, 10){
                    ll ni = i+1, nj=j, nk=k;
                    if(d != 0) nj++;
                    if(nj > K) continue;
                    if(k == 0){
                        if(d > n) continue;
                        if(d < n) nk = 1;
                    }
                    dp[ni][nj][nk] += dp[i][j][k];
                }
            }
        }
    }
    cout << dp[s.size()][K][0] + dp[s.size()][K][1] << endl;
}