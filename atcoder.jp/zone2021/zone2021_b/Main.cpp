#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,X,Y; cin>>N>>X>>Y;

    double res = 0;
    rep(i, N){
        ll x,y; cin>>x>>y;
        if(x > X) continue;
        chmax(res, double(X*y-x*Y)/(X-x));
    }
    cout << fixed << setprecision(10) << res << endl;
}