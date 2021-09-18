//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    ll X, Y; cin>>X>>Y;
    vector<ll> A(N), B(N);
    ll a=0, b=0;
    rep(i, N){
        cin>>A[i]>>B[i];
        a += A[i];
        b += B[i];
    }
    if(a < X || b < Y) {
        cout << -1 << endl;
        return 0;
    }

    vector dp(301, vector<vector<ll>>(301, vector<ll>(301, 1e10)));

    rep(i, 301) {
        dp[i][0][0] = 0;
    }

    ll mn = 1e10;
    for(ll i=0; i<N; i++){
        rep(j, 301){
            rep(k, 301) {
                chmin(dp[i+1][min(300LL, j+A[i])][min(300LL, k+B[i])],
                      min(dp[i][j][k]+1, dp[i][min(300LL, j+A[i])][min(300LL, k+B[i])]));
                chmin(dp[i+1][j][k], dp[i][j][k]);
                if(j+A[i] >= X && k+B[i] >= Y){
                    chmin(mn, dp[i+1][min(300LL, j+A[i])][min(300LL, k+B[i])]);
                }
            }
        }
    }
    cout << mn << endl;
}