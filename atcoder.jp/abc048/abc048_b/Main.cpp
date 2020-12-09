#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll a,b,x; cin>>a>>b>>x;

    cout << b/x - max((ll)0, (a-1))/x + (a == 0 ? 1 : 0)<< endl;
}