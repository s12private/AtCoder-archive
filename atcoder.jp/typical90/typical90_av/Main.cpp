//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,K; cin>>N>>K;
    vector<ll> A;
    rep(i, N){
        ll a,b; cin>>a>>b;
        A.push_back(b);
        A.push_back(a-b);
    }
    sort(A.rbegin(), A.rend());

    ll res = 0;
    rep(i, K){
        if(i >= 2*N) break;
        res += A[i];
    }
    cout << res << endl;
}