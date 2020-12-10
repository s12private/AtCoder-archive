#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll N, K;
ll T[5][5];

bool dfs(int n, int val){
    if(n == N) return val == 0;

    bool flag = false;
    for(ll i=0; i<K; i++){
        if(dfs(n+1, val^T[n][i])) flag = true;
    }
    return flag;
}

int main() {
    cin>>N>>K;

    rep(i, N) rep(j, K) cin>>T[i][j];

    bool flag = dfs(0, 0);
    cout << (flag ? "Found" : "Nothing") << endl;
}