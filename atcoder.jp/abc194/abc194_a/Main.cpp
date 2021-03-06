#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll A, B; cin>>A>>B;
    ll res = 4;
    if(A+B >= 15 && B >= 8){
        res = 1;
    }else if(A+B >= 10 && B >= 3){
        res = 2;
    }else if(A+B >= 3){
        res = 3;
    }
    cout << res << endl;
}