#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> a(N, vector<ll>(3));
    rep(i, N) cin>>a[i][0]>>a[i][1]>>a[i][2];

    vector<vector<ll>> dp(N, vector<ll>(3));
    dp[0][0] = a[0][0], dp[0][1] = a[0][1], dp[0][2] = a[0][2];
    for(ll i=1; i<N; i++){
        rep(j, 3){
            rep(k, 3){
                if(j == k) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][k]+a[i][j]);
            }
        }
    }
    cout << max({dp[N-1][0], dp[N-1][1], dp[N-1][2]}) << endl;
}