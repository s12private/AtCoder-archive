#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll sx, sy, tx, ty;
    cin>>sx>>sy>>tx>>ty;

    for(ll i=0; i<ty-sy; i++) cout << "U";
    for(ll i=0; i<tx-sx; i++) cout << "R";
    for(ll i=0; i<ty-sy; i++) cout << "D";
    for(ll i=0; i<tx-sx+1; i++) cout << "L";
    for(ll i=0; i<ty-sy+1; i++) cout << "U";
    for(ll i=0; i<tx-sx+1; i++) cout << "R";
    cout << "D";
    cout << "R";
    for(ll i=0; i<ty-sy+1; i++) cout << "D";
    for(ll i=0; i<tx-sx+1; i++) cout << "L";
    cout << "U" << endl;
}