//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> A(N), B(M);
    rep(i, N){
        cin>>A[i];
    }
    rep(i, M){
        cin>>B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll res = 1e18;
    for(ll a : A){
        auto itr = lower_bound(B.begin(), B.end(), a);
        ll index = itr - B.begin();
        ll mn = 1e18;
        if(index >= 0 && index < B.size()) chmin(mn, abs(a-B[index]));
        if(index > 0)  chmin(mn, abs(a-B[index-1]));
        if(index < B.size()-1)  chmin(mn, abs(a-B[index+1]));
        chmin(res, mn);
    }
    cout << res << endl;
}