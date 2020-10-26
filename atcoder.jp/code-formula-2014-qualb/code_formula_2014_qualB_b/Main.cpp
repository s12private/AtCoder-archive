#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string N; cin>>N;
    ll a=0, b=0;
    reverse(N.begin(), N.end());
    for(int i=0; i<N.size(); i++){
        if(i%2 == 0){
            a += (int)(N[i] - '0');
        }else{
            b += (int)(N[i] - '0');
        }
    }

    cout << b << " " << a << endl;
}