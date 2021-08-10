//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;

    vector dp(S.size()+1, vector<ll>(13));
    dp[0][0] = 1;
    ll p = 1;
    ll MOD = 1e9+7;
    for(ll i=1; i<=S.size(); i++){
        if(S[S.size()-i] != '?'){
            ll n = S[S.size()-i] - '0';
            n *= p;
            n %= 13;
            rep(j, 13){
                ll m = (j+n)%13;
                dp[i][m] += dp[i-1][j];
                dp[i][m] %= MOD;
            }
        }else{
            rep(k, 10){
                ll n = k*p;
                n %= 13;
                rep(j, 13){
                    ll m = (j+n)%13;
                    dp[i][m] += dp[i-1][j];
                    dp[i][m] %= MOD;
                }
            }
        }
        p *= 10;
        p %= 13;
        rep(j, 13){
            //cout << dp[i][j] << " ";
        }
        //cout << endl;
    }
    cout << dp[S.size()][5] << endl;
}