#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, X; cin>>N>>X;
    ll sum = 0;
    rep(i, N){
        ll A; cin>>A;
        sum += A - i%2;
    }
    if(sum <= X){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}