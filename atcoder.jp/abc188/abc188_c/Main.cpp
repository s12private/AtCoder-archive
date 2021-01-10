//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    stack<ll> A;
    vector<ll> res(pow(2, N));
    rep(i, pow(2, N)){
        ll a; cin>>a;
        A.push(a);
        res[i] = a;
    }

    ll n = pow(2, N);
    while(A.size() > 2){
        stack<ll> B;
        while(!A.empty()){
            ll a = A.top();
            A.pop();
            ll b = A.top();
            A.pop();
            B.push(max(a, b));
        }
        while(!B.empty()){
            A.push(B.top());
            B.pop();
        }
    }
    ll a = A.top();
    A.pop();
    ll b = A.top();
    A.pop();
    ll mn = min(a, b);
    for(ll i=0; i<res.size(); i++){
        if(res[i] == mn){
            cout << i+1 << endl;
            return 0;
        }
    }
}