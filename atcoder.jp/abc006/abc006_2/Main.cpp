#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int n;
    cin>>n;
    ll dp[n];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3; i<n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        dp[i] %= 10007;
    }

    cout << dp[n-1] << endl;
}
