#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    ll a[N+1];
    a[0] = 0;
    rep(i, N){
        ll b; cin>>b;
        a[i+1] = a[i] + b;
    }

    ll min = 10e17;
    FOR(i, 1, N){
        min = std::min(abs(a[i]-(a[N]-a[i])), min);
    }

    cout << min << endl;
}
