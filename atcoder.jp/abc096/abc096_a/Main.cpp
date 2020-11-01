#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll a, b; cin>>a>>b;
    if(b >= a){
        cout << a << endl;

    }else{
        cout << a-1 << endl;
    }
}