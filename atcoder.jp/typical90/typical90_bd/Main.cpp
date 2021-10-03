//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, S; cin>>N>>S;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i]>>B[i];
    vector<vector<bool>> dp(N+1, vector<bool>(1e5+1));

    dp[0][0] = true;

    for(ll i=1; i<=N; i++) {
        rep(j, 1e5+1) {
            if(!dp[i-1][j]) continue;

            dp[i][min((ll)1e5, j+A[i-1])] = true;
            dp[i][min((ll)1e5, j+B[i-1])] = true;
        }
    }

    if(!dp[N][S]) {
        cout << "Impossible" << endl;
        return 0;
    }

    string res = "";
    for(ll i=N-1; i>=0; i--) {
        if(S-A[i] >= 0 && dp[i][S-A[i]]) {
            res += 'A';
            S -= A[i];
        } else {
            res += 'B';
            S -= B[i];
        }
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}