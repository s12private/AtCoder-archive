//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

double dp[200][200][200];

int main() {
    ll A,B,C; cin>>A>>B>>C;

    for(ll i=99; i>=A; i--){
        for(ll j=99; j>=B; j--){
            for(ll k=99; k>=C; k--){
                dp[i][j][k] = (double)i/(i+j+k) * (dp[i+1][j][k]+1)
                        + (double)j/(i+j+k) * (dp[i][j+1][k]+1)
                        + (double)k/(i+j+k) * (dp[i][j][k+1]+1);
            }
        }
    }
    cout << fixed << setprecision(10) << dp[A][B][C] << endl;
}