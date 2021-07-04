//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll P; cin>>P;
    vector<ll> a(12);
    a[0] = 1;
    for(ll i=1; i<=11; i++){
        a[i] = a[i-1]*i;
    }

    ll res = 0;
    ll i = 0;
    reverse(a.begin(), a.end());
    while(P > 0){
        res += P/a[i];
        P %= a[i];
        i++;
    }
    cout << res << endl;
}