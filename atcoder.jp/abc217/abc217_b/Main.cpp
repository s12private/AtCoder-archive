//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    vector<string> a(3);
    cin>>a[0]>>a[1]>>a[2];
    vector<string> k = {"ABC", "ARC", "AGC", "AHC"};


    rep(i, 4){
        bool p = false;
        rep(j, 3){
            if(k[i] == a[j]) p = true;
        }
        if(!p){
            cout << k[i] << endl;
            return 0;
        }
    }
}