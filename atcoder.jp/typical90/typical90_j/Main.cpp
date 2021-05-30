#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> P(2, vector<ll>(N+1));

    rep(i, N){
        ll C,p; cin>>C>>p;
        P[0][i+1] = P[0][i];
        P[1][i+1] = P[1][i];
        P[C-1][i+1] += p;
    }

    ll Q; cin>>Q;
    rep(i, Q){
        ll L, R; cin>>L>>R;
        L--, R--;
        cout << P[0][R+1]-P[0][L] << " " << P[1][R+1]-P[1][L] << endl;
    }
}