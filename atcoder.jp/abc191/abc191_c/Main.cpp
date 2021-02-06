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

    ll res = 0;
    ll count = 0;
    rep(y, H){
        rep(x, W){
            if(S[y][x] == '#'){
                if(S[y][x-1] == '.' && S[y+1][x-1] == '.' && S[y+1][x] == '.'){
                    res++;
                }
                if(S[y+1][x] == '.' && S[y+1][x+1] == '.' && S[y][x+1] == '.'){
                    res++;
                }
                if(S[y][x+1] == '.' && S[y-1][x+1] == '.' && S[y-1][x] == '.'){
                    res++;
                }
                if(S[y-1][x] == '.' && S[y-1][x-1] == '.' && S[y][x-1] == '.'){
                    res++;
                }

                if(S[y][x-1] == '#' && S[y+1][x-1] == '.' && S[y+1][x] == '#'){
                    res++;
                }
                if(S[y+1][x] == '#' && S[y+1][x+1] == '.' && S[y][x+1] == '#'){
                    res++;
                }
                if(S[y][x+1] == '#' && S[y-1][x+1] == '.' && S[y-1][x] == '#'){
                    res++;
                }
                if(S[y-1][x] == '#' && S[y-1][x-1] == '.' && S[y][x-1] == '#'){
                    res++;
                }
            }
        }
    }
    cout << res << endl;
}