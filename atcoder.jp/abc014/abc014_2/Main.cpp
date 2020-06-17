#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int n,X;
    cin>>n>>X;

    vector<bool> bit(21, false);
    for(int i=20; i>=0; i--){
        if(pow(2, i) <= X){
            bit[i] = true;
            X -= pow(2, i);
        }
    }
    long sum = 0;
    rep(i, n){
        int a; cin>>a;
        if(bit[i]) sum+=a;
    }

    cout << sum << endl;
}
