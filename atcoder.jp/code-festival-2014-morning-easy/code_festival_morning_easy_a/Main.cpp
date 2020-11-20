#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i, n) cin>>a[i];

    double ans = 0;
    for(ll i=1; i<n; i++){
        ans += a[i]-a[i-1];
    }
    cout << fixed << setprecision(10) << ans/(n-1) << endl;
}