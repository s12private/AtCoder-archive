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
    string N; cin>>N;
    ll K; cin>>K;
    for(ll i=0; i<K; i++){
        sort(N.rbegin(), N.rend());
        ll a = stol(N);
        reverse(N.begin(), N.end());
        N = to_string(a - stol(N));
    }
    cout << N << endl;
}