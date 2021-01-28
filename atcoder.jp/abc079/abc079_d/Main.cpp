//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int c[10][10];

int search(int start){
    
}

int main() {
    ll H,W; cin>>H>>W;
    vector<vector<ll>> A(H, vector<ll>(W));
    rep(i, 10) rep(j, 10) cin>>c[i][j];
    rep(i, H) rep(j, W) cin>>A[i][j];

    vector<ll> mn(10);

    for(int i=0; i<10; i++){
        mn[i] = c[i][1];
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                if(j == k) continue;
                mn[k] = min(c[k][j]+mn[j], mn[k]);
            }
        }
    }

    ll res = 0;
    rep(i, H){
        rep(j, W){
            if(A[i][j] != -1) res += mn[A[i][j]];
        }
    }
    cout << res << endl;
}