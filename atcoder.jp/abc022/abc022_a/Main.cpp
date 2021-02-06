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
    ll N, S, T; cin>>N>>S>>T;
    ll W; cin>>W;
    ll res = 0;
    if(W >= S && W <= T) res++;
    rep(i, N-1){
        ll A; cin>>A;
        W += A;
        if(W >= S && W <= T) res++;
    }
    cout << res << endl;
}