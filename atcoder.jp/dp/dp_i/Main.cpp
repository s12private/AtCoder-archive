//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<double> p(N);
    rep(i, N) cin>>p[i];
    vector dp(N+1, vector<double>(N+1));
    dp[0][0] = 1;

    for(ll i=1; i<=N; i++){
        for(ll j=0; j<=i; j++){
            if(j > 0)
                dp[i][j] += dp[i-1][j-1] * p[i-1];
            dp[i][j] += dp[i-1][j] * (1-p[i-1]);
        }
    }

    double res = 0;
    for(ll i=N/2+1; i<=N; i++){
        res += dp[N][i];
    }

    cout << fixed << setprecision(10) << res << endl;
}