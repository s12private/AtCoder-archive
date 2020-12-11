//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H, W; cin>>H>>W;
    vector<string> s(H);
    rep(i, H) cin>>s[i];

    vector<vector<ll>> dp(H, vector<ll>(W));
    if(s[0][0] == '#') dp[0][0] = 1;
    if(s.back().back() == '#') dp[0][0] = 1;
    for(ll y=0; y<H; y++){
        for(ll x=0; x<W; x++){
            if(x == 0 && y == 0) continue;
            if(x == 0) dp[y][x] = dp[y-1][x] + (s[y-1][x] != s[y][x]);
            else if(y == 0) dp[y][x] = dp[y][x-1] + (s[y][x-1] != s[y][x]);
            else dp[y][x] = min( dp[y-1][x] + (s[y-1][x] != s[y][x]), dp[y][x-1] + (s[y][x-1] != s[y][x]));
        }
    }
    cout << ceil(dp.back().back()/2.0) << endl;
}