#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(abs(a-b) <= d && abs(b-c) <= d || abs(a-c) <= d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}