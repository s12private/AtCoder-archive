//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S; cin>>S;
    vector<ll> b(N), w(N);
    rep(i, N){
        if(i == 0) continue;
        b[i] += b[i-1] + (S[i-1] == '#');
        w[N-i-1] += w[N-i] + (S[N-i] == '.');
    }

    ll res = 1e18;
    rep(i, N){
        res = min(res, b[i] + w[i]);
    }
    cout << res << endl;
}