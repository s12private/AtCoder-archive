#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, M; cin>>N>>M;
    vector<bool> A(1001), B(1001);
    rep(i, N){
        ll a; cin>>a;
        A[a] = true;
    }
    rep(i, M){
        ll a; cin>>a;
        B[a] = true;
    }

    vector<ll> ans;
    rep(i, 1001){
        if(A[i] ^ B[i]) cout << i << endl;
    }
}