#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, n) for (ll i = (ll)a; i < (ll)(n); i++)

int main() {
    vector<ll> dp(20);
    dp[0] = 100;
    dp[1] = 100;
    dp[2] = 200;
    rep(i, 3, 20){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout << dp.back() << endl;
}