//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll X; cin>>X;
    ll a = 0;
    if(X < 40) {
        a = 40-X;
    }else if(X < 70) {
        a = 70-X;
    }else if(X < 90){
        a = 90-X;
    }else {
        cout << "expert" << endl;
        return 0;
    }
    cout << a << endl;

}