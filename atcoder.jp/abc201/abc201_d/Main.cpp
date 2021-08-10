//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H, W; cin>>H>>W;
    vector<string> A(H);
    rep(i, H) cin>>A[i];

    vector dp(H, vector<ll>(W));

    for(ll i=H-1; i>=0; i--){
        for(ll j=W-1; j>=0; j--){
            if((i+j)%2 == 0){
                if(i+1 < H && j+1 < W){
                    ll d = A[i+1][j] == '+' ? 1 : -1;
                    ll r = A[i][j+1] == '+' ? 1 : -1;
                    dp[i][j] = max(dp[i+1][j]+d, dp[i][j+1]+r);
                }else if(i+1 < H){
                    ll d = A[i+1][j] == '+' ? 1 : -1;
                    dp[i][j] = dp[i+1][j] + d;
                }else if(j+1 < W){
                    ll r = A[i][j+1] == '+' ? 1 : -1;
                    dp[i][j] = dp[i][j+1] + r;
                }
            }else{
                if(i+1 < H && j+1 < W){
                    ll d = A[i+1][j] == '+' ? 1 : -1;
                    ll r = A[i][j+1] == '+' ? 1 : -1;
                    dp[i][j] = min(dp[i+1][j]-d, dp[i][j+1]-r);
                }else if(i+1 < H){
                    ll d = A[i+1][j] == '+' ? 1 : -1;
                    dp[i][j] = dp[i+1][j] - d;
                }else if(j+1 < W){
                    ll r = A[i][j+1] == '+' ? 1 : -1;
                    dp[i][j] = dp[i][j+1] - r;
                }
            }
        }
    }

    rep(i, H){
        rep(j, W){
            //cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    if(dp[0][0] == 0){
        cout << "Draw" << endl;
    }else if(dp[0][0] < 0){
        cout << "Aoki" << endl;
    }else{
        cout << "Takahashi" << endl;
    }
}