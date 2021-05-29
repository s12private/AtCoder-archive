//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H, W; cin>>H>>W;
    vector<vector<ll>> A(H, vector<ll>(W));
    rep(i, H) rep(j, W) cin>>A[i][j];

    vector<ll> h(H), w(W);
    rep(i, H){
        ll sum = 0;
        rep(j, W){
            sum += A[i][j];
        }
        h[i] = sum;
    }
    rep(i, W){
        ll sum = 0;
        rep(j, H){
            sum += A[j][i];
        }
        w[i] = sum;
    }

    rep(i, H){
        rep(j, W){
            cout << w[j]+h[i]-A[i][j];
            if(j < W-1) cout << " ";
        }
        cout << endl;
    }
}