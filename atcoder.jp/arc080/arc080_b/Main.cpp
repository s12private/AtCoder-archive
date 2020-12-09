#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H,W,N; cin>>H>>W>>N;
    queue<ll> que;
    rep(i, N){
        ll a; cin>>a;
        rep(j, a) que.push(i+1);
    }

    vector<vector<ll>> ans(H, vector<ll>(W));
    for(ll h=0; h<H; h++){
        if(h%2 == 0){
            for(ll w=0; w<W; w++){
                ans[h][w] = que.front();
                que.pop();
            }
        }else{
            for(ll w=W-1; w>=0; w--){
                ans[h][w] = que.front();
                que.pop();
            }
        }
    }

    rep(i, H){
        rep(j, W){
            cout << ans[i][j];
            if(j != W-1) cout << " ";
        }
        cout << endl;
    }
}