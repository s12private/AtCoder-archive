#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N,A,B; cin>>N>>A>>B;
    ll mx = 0, mn = 10e10, sum = 0;
    rep(i, N){
        ll S; cin>>S;
        mx = max(mx, S);
        mn = min(mn, S);
        sum += S;
    }

    if(mx - mn == 0){
        cout << "-1" << endl;
        return 0;
    }

    double P = (double)B / (mx-mn);
    double Q = A - P/N*sum;

    cout << fixed << setprecision(10) << P << " " << Q << endl;
}