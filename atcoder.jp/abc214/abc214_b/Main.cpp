//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll S, T; cin>>S>>T;

    ll res = 0;
    rep(i, 101){
        rep(j, 101){
            rep(k, 101){
                if((i+j+k) <= S && (i*j*k) <= T) res++;
            }
        }
    }
    cout << res << endl;
}