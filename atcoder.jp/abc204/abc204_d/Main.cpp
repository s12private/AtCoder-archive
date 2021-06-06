//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;

    vector<ll> p(N);
    ll sum = 0;
    rep(i, N){
        ll t; cin>>t;
        p[i] = t;
        sum += t;
    }

    //sort(p.rbegin(), p.rend());

    vector<vector<bool>> dp(N+1, vector<bool>(sum+1));

    dp[0][0] = true;

    rep(i, N){
        rep(j, sum+1){
            if(dp[i][j]){
                dp[i+1][j+p[i]] = true;
            }
            dp[i+1][j] = dp[i][j] || dp[i+1][j];
        }
    }

    ll mn = 1e9;
    rep(i, sum+1){
        if(dp[N][i]){
            ll a = i;
            ll j = sum-i;
            chmin(mn, max(a,j));
        }
    }
    cout << mn <<endl;
}