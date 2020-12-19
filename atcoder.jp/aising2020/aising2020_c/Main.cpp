#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    for(ll n=1; n<=N; n++) {
        ll count = 0;
        for (ll x = 1; x * x <= n; x++) {
            for (ll y = 1; x*x+y*y <= n; y++) {
                for (ll z = 1; x*x+y*y+z*z <= n; z++) {
                    if (x * x + y * y + z * z + x * y + y * z + z * x == n) count++;
                    if(x * x + y * y + z * z + x * y + y * z + z * x > n) break;
                }
            }
        }
        cout << count << endl;
    }
}