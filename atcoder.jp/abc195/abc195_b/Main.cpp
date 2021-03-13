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
    ll A, B, W; cin>>A>>B>>W;
    double w = W*1000;
    ll mn = ceil(w/B);
    ll mx = floor(w/A);
    if(mx < mn){
        cout << "UNSATISFIABLE" << endl;
    }else{
        cout << mn << " " << mx << endl;
    }
}