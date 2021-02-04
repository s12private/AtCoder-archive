//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H, W, N, M; cin>>H>>W>>N>>M;
    vector<vector<ll>> a(H, vector<ll>(W));
    rep(i, N){
        ll A,B; cin>>A>>B;
        a[--A][--B] = 1;
    }
    rep(i, M){
        ll A,B; cin>>A>>B;
        a[--A][--B] = 2;
    }

    vector<vector<bool>> b(H, vector<bool>(W));
    rep(y, H){
        bool flag1 = false, flag2 = false;
        rep(x, W){
            if(a[y][x] == 1) flag1 = true;
            if(a[y][x] == 2) flag1 = false;
            if(flag1) b[y][x] = true;

            if(a[y][W-x-1] == 1) flag2 = true;
            if(a[y][W-x-1] == 2) flag2 = false;
            if(flag2) b[y][W-x-1] = true;
        }
    }
    rep(x, W){
        bool flag1 = false, flag2 = false;
        rep(y, H){
            if(a[y][x] == 1) flag1 = true;
            if(a[y][x] == 2) flag1 = false;
            if(flag1) b[y][x] = true;

            if(a[H-y-1][x] == 1) flag2 = true;
            if(a[H-y-1][x] == 2) flag2 = false;
            if(flag2) b[H-y-1][x] = true;
        }
    }

    ll res = 0;
    rep(i, H) {
        rep(j, W) {
            if (b[i][j]) res++;
        }
    }
    cout << res << endl;
}