#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll T; cin>>T;
    ll L,X,Y,Q; cin>>L>>X>>Y>>Q;
    double r = L/2.0;
    rep(i, Q){
        ll E; cin>>E;
        double rad = (double)E/T * 2*M_PI;
        rad *= -1;
        rad -= M_PI/2.0;
        double y = r*cos(rad);
        double z = r + r*sin(rad);

        double h = z;
        double d = sqrt(pow(X, 2) + pow(Y-y, 2));
        double res = atan2(h, d);
        cout << fixed << setprecision(20) << res*180/M_PI << endl;
    }
}