#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll x1, y1, r, x[2], y[2];
    cin>>x1>>y1>>r>>x[0]>>y[0]>>x[1]>>y[1];

    bool flag1 = false;
    rep(i, 2) rep(j, 2){
        if(pow(x[i]-x1, 2) + pow(y[j]-y1, 2) > r*r){
            flag1 = true;
        }
    }

    if(!flag1){
        cout << "YES" << endl;
        cout << "NO" << endl;
    }else{
        if(x[0] <= x1-r && x1+r<=x[1] && y[0] <= y1-r && y1+r <= y[1]){
            cout << "NO" << endl;
            cout << "YES" << endl;
        }else {
            cout << "YES" << endl;
            cout << "YES" << endl;
        }
    }
}