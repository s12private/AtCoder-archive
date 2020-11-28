#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll a,b,x,y; cin>>a>>b>>x>>y;
    ll mn = 1e9;
    if(a > b){
        mn = min((a-b-1)*y + x, ((a-b)*2-1)*x);
    }else{
        mn = min((b-a)*y + x, ((b-a)*2+1)*x);
    }
    cout <<mn<<endl;
}