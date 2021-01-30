//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    ll res = 0;
    vector<ll> c;
    for(ll i=1; (i*i-i)/2<N; i++){
        if((i*i-i)%2 == 0 && (N-(i*i-i)/2)%i == 0){
            res++;
        }
    }
    cout << 2*res << endl;
}

