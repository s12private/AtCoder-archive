#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin>>n;
    cout << (((n-1)/20)%2 == 0 ? (n-1)%20+1 : 20-(n-1)%20) << endl;
}