#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int N; cin>>N;
    int a[N];
    int sum = 0;
    rep(i, N){
        cin>>a[i];
        sum ^= a[i];
    }

    rep(i, N){
        cout << (sum^a[i]);
        if(i != N-1) cout << " ";
    }

    cout << endl;
}
