#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll A,B,C; cin>>A>>B>>C;

    if(A%2==0 || B%2==0 || C%2==0) cout << 0 << endl;
    else cout << min(A*B, min(A*C, C*B)) << endl;
}