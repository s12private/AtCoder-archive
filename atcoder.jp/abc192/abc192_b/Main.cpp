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
    map<char, bool> m;
    for(char i = 'a'; i<='z'; i++){
        m[i] = false;
    }
    for(char i = 'A'; i<='Z'; i++){
        m[i] = true;
    }

    bool flag = false;
    for(ll i=0; i<S.size(); i+=2){
        if(m[S[i]]) flag = true;
    }
    for(ll i=1; i<S.size(); i+=2){
        if(!m[S[i]]) flag = true;
    }
    if(flag){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}