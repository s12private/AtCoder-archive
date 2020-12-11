//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H,W,K; cin>>H>>W>>K;
    vector<vector<char>> s(H, vector<char>(W));

    vector<ll> count(H);
    ll sum = 0;
    rep(i, H){
        rep(j, W){
            cin>>s[i][j];
        }
    }

    ll num = 0;
    vector<vector<ll>> res(H, vector<ll>(W, -1));
    for(ll y=0; y<H; y++){
        bool flag = false;
        for(ll x=0; x<W; x++){
            if(s[y][x] == '#'){
                num++;
                if(!flag) for(ll i=x; i>=0; i--) res[y][i] = num;
                flag = true;
            }
            if(flag) res[y][x] = num;
        }
    }

    for(ll x=0; x<W; x++){
        bool flag = false;
        for(ll y=0; y<H; y++){
            if(!flag && res[y][x] != -1){
                if(!flag) for(ll i=y; i>=0; i--) res[i][x] = res[y][x];
                flag = true;
            }

            if(flag && res[y][x] == -1){
                res[y][x] = res[y-1][x];
            }
        }
    }

    rep(i, H){
        rep(j, W){
            cout << res[i][j] << (j != W-1 ? " " : "");
        }
        cout << endl;
    }
}