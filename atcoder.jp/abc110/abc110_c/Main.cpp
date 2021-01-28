//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S,T; cin>>S>>T;
    map<char, vector<ll>> s, t;
    for(char i='a'; i<='z'; i++){
        for(int j=0; j<S.size(); j++){
            if(S[j] == i) s[i].push_back(j);
            if(T[j] == i) t[i].push_back(j);
        }
    }

    bool res = false;
    for(char i='a'; i<='z'; i++){
        vector<ll> a = s[i];
        bool flag = false;
        for(char j='a'; j<='z'; j++){
            vector<ll> b = t[j];
            if(a.size() == b.size() && equal(a.begin(), a.end(), b.begin())){
                flag = true;
            }
        }
        if(!flag) res = true;
    }
    cout << (res ? "No" : "Yes") << endl;
}