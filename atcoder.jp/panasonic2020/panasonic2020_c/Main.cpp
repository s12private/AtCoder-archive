#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll a, b, c; cin>>a>>b>>c;

    cout << (c-a-b > 0 && 4*a*b < c*c+a*a+b*b-2*a*c-2*b*c+2*a*b ? "Yes" : "No") << endl;
}