#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll x,y; cin>>x>>y;
    if(x != y){
        vector<bool> a(3);
        a[x] = true;
        a[y] = true;
        rep(i, 3) if(!a[i]) cout << i << endl;
    }else{
        cout <<x << endl;
    }
}