#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int N,K; cin>>N>>K;
    int R[N];
    rep(i, N) cin>>R[i];

    sort(R, R+N);

    double rate = 0;
    rep(i, K){
        rate = (rate+R[N-K+i])/2.0;
    }

    cout << fixed << setprecision(10) << rate << endl;
}
