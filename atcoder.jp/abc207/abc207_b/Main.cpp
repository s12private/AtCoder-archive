#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll A,B,C,D; cin>>A>>B>>C>>D;

    if(B-D*C == 0){
        cout << -1 << endl;
        return 0;
    }
    double a = (double)(-A)/(B-D*C);
    if(a < -1){
        cout << -1 << endl;
    }else{
        cout << ceil(a) << endl;
    }
}