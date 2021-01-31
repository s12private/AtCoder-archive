//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M,X,Y; cin>>N>>M>>X>>Y;
    queue<ll> a, b;
    rep(i, N){
        ll x; cin>>x;
        a.push(x);
    }
    rep(i, M){
        ll x; cin>>x;
        b.push(x);
    }

    ll res = 0;

    while(1){
        while(!b.empty() && b.front() < a.front()+X) b.pop(); 
        if(b.empty()) break;
        res++;
        while(!a.empty() && a.front() < b.front()+Y) a.pop();
        if(a.empty()) break;
    }
    cout << res << endl;
}