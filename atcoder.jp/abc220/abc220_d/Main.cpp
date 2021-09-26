//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];
    vector a = vector<vector<ll>>(N, vector<ll>(10));

    a[0][A[0]] = 1;

    for(ll i=1; i<N; i++){
        rep(j, 10){
            if(a[i-1][j]){
                ll p = (j+A[i])%10;
                ll m = (j*A[i])%10;
                a[i][p] += (a[i-1][j])%998244353;
                a[i][m] += (a[i-1][j])%998244353;
            }
        }
    }
    rep(i, 10) {
        cout << a[N-1][i]%998244353 << endl;
    }
}