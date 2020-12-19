#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll H,W; cin>>H>>W;
    vector<vector<ll>> A(H, vector<ll>(W));
    ll mn = 101;
    rep(i, H){
        rep(j, W){
            cin>>A[i][j];
            mn = min(mn, A[i][j]);
        }
    }

    ll res = 0;
    rep(i, H){
        rep(j, W){
            res += (A[i][j] - mn);
        }
    }
    cout << res << endl;
}