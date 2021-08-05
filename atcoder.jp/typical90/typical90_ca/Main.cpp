//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H, W; cin>>H>>W;
    vector<vector<ll>> A(H, vector<ll>(W)), B(H, vector<ll>(W));
    rep(i, H) rep(j, W) cin>>A[i][j];
    rep(i, H) rep(j, W) cin>>B[i][j];

    ll res = 0;
    rep(i, H){
        rep(j, W){
            if(i == H-1 || j == W-1){
                if(A[i][j] != B[i][j]){
                    cout << "No" << endl;
                    return 0;
                }
                continue;
            }
            ll sum = 0;
            if(A[i][j] != B[i][j]){
                sum += B[i][j] - A[i][j];
            }
            A[i+1][j] += sum;
            A[i][j+1] += sum;
            A[i+1][j+1] += sum;
            res += abs(sum);
        }
    }
    cout << "Yes" << endl;
    cout << res << endl;
}