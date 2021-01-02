#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string a, b; cin>>a>>b;
    ll c=0, d=0;
    rep(i, 3){
        c += a[i]-'0';
        d += b[i]-'0';
    }
    cout << max(c, d) << endl;
}