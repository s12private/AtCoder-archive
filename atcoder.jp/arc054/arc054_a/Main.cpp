#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll L,X,Y,S,D; cin>>L>>X>>Y>>S>>D;
    ll disR = D < S ? abs(L-S + D) : abs(D-S);
    ll disL = D < S ? abs(S-D) : abs(L-D+S);
    double vR = (double)disR / abs(X+Y);
    double vL = X < Y ? (double)disL / abs(X-Y) : vR;

    cout << fixed << setprecision(10) << (vR < vL ? vR : vL) << endl;
}