#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll A,B,X; cin>>A>>B>>X;
    cout << (A<=X ? X-A<=B ? "YES" : "NO" : "NO") << endl;
}