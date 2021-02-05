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
    ll H, W; cin>>H>>W;
    vector<string> S(H);
    rep(i, H) cin>>S[i];

    vector<vector<ll>> res(H, vector<ll>(W));
    rep(y, H){
        ll count = 0;
        rep(x, W){
            if(S[y][x] == '.') count++;
            if(S[y][x] == '#' || x == W-1){
                if(count == 0) continue;
                for(ll i= S[y][x] == '#' ? x-1 : x; i>=0 && S[y][i] == '.'; i--){
                    res[y][i] = count;
                }
                count = 0;
            }
        }
    }
    rep(x, W){
        ll count = 0;
        rep(y, H){
            if(S[y][x] == '.') count++;
            if(S[y][x] == '#' || y == H-1){
                if(count == 0) continue;
                for(ll i= S[y][x] == '#' ? y-1 : y; i>=0 && S[i][x] == '.'; i--){
                    res[i][x] += count-1;
                }
                count = 0;
            }
        }
    }

    ll mx = 0;
    rep(i, H){
        rep(j, W) {
            chmax(mx, res[i][j]);
        }
    }
    cout << mx << endl;
}