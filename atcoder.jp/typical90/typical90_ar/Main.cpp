#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,Q; cin>>N>>Q;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll s = N*100000;
    rep(i, Q){
        ll T,x,y; cin>>T>>x>>y;
        x--, y--;
        x = (x+s)%N;
        y = (y+s)%N;
        if(T == 1){
            ll tmp = A[x];
            A[x] = A[y];
            A[y] = tmp;
        }
        if(T == 2){
            s--;
        }
        if(T == 3){
            cout << A[x] << endl;
        }
    }
}