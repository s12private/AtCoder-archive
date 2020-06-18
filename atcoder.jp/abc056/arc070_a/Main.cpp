#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll X;
    cin>>X;
    ll sum = 0;
    rep(i, X){
        sum += i+1;
        if(sum >= X){
            cout << i+1 << endl;
            return 0;
        }
    }
}
