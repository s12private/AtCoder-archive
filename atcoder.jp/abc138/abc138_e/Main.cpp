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
    string s,t; cin>>s>>t;
    map<char, vector<ll>> m;
    rep(i, s.size()) m[s[i]].push_back(i);
    for(char c : t){
        if(m[c].size() == 0){
            cout << -1 << endl;
            return 0;
        }
    }

    ll i = 0;
    ll n = 0;
    for(char c : t){
        if(i == 0 && n == 0) {
            i = m[c][0]+1;
            continue;
        }
        ll index = upper_bound(m[c].begin(), m[c].end(), i-n*s.size()-1) - m[c].begin();
        if(index < m[c].size()){
            i = n*s.size() + m[c][index]+1;
            continue;
        }
        n++;
        i = n*s.size() + m[c][0]+1;
    }
    cout << i << endl;
}