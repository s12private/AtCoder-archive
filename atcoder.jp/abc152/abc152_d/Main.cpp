#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;

    vector<vector<ll>> n(10, vector<ll>(10));
    
    for(ll i=1; i<=N; i++){
        string s = to_string(i);
        ll l = s[0]-'0', r = s.back()-'0';
        if(!l || !r) continue;
        n[l][r]++;
    }

    ll res = 0;
    rep(i, 10){
        rep(j, 10) res += n[i][j] * n[j][i];
    }
    cout << res << endl;
}