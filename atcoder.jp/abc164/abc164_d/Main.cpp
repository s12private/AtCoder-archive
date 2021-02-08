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
    string S; cin>>S;
    reverse(S.begin(), S.end());

    vector<ll> a(S.size());
    ll d = 1;
    ll MOD = 2019;
    rep(i, S.size()){
        a[i] = (S[i]-'0') * d % MOD;
        d *= 10;
        d %= MOD;
    }

    vector<ll> s(S.size() + 1);
    rep(i, S.size()){
        s[i+1] = (a[i] + s[i]) %MOD;
    }

    vector<ll> k(MOD);
    ll res = 0;
    rep(i, S.size()+1){
        res += k[s[i]];
        k[s[i]]++;
    }
    cout << res << endl;
}