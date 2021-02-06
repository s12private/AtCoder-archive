#define _GLIBCXX_DEBUG
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
    vector<vector<char>> c(4, vector<char>(4));
    rep(i, 4) rep(j, 4) cin>>c[i][j];

    rep(i, 4){
        rep(j, 4){
            cout << c[3-i][3-j];
            if(j < 3) cout << " ";
        }
        cout << endl;
    }
}