#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll X,Y; cin>>X>>Y;
    ll mn = min(X, Y) + 3;
    ll mx = max(X, Y);
    if(mn > mx) cout << "Yes" << endl;
    else cout << "No" << endl;
}