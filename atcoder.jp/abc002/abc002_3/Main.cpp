#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    c-=a;d-=b;e-=a;f-=b;
    cout << fixed << setprecision(10) << abs(c*f-d*e)/2.0 << endl;
}