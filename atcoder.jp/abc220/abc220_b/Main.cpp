//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll K; cin>>K;
    string A, B; cin>>A>>B;
    ll a=0, b=0;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    for(ll i=0; i<A.size(); i++){
        a += (A[i]-'0')*pow(K, i);
    }
    for(ll i=0; i<B.size(); i++){
        b += (B[i]-'0')*pow(K, i);
    }
    cout << a*b << endl;
}