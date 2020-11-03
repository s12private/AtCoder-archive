#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    vector<ll> a(3);
    cin >>a[0]>>a[1]>>a[2];
    ll R = a[0]+a[1]+a[2];
    sort(a.begin(), a.end());
    ll r = a[2]-(a[0]+a[1]);
    if(a[2] < a[0]+a[1])r = 0;
    cout << fixed << setprecision(10) << (R*R-r*r)*M_PI << endl;
}