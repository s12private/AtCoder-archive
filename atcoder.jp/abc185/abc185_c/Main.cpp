#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    cpp_int n = 1, k = 1;
    rep(i, 11){
        n *= N-i-1;
        k *= i+1;
    }
    cout << n/k << endl;
}