//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,S,D; cin>>N>>S>>D;
    ll res = 0;
    rep(i, N){
        ll X, Y; cin>>X>>Y;
        if(X >=S || Y<=D) continue;
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}


