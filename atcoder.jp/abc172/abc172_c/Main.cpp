//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M,K; cin>>N>>M>>K;
    vector<ll> A(N+1), B(M+1);
    rep(i, N) {
        ll a; cin>>a;
        A[i+1] = A[i] + a;
    }
    rep(i, M) {
        ll b; cin>>b;
        B[i+1] = B[i] + b;
    }

    ll res = 0;
    rep(i, N+1){
        if(K-A[i] < 0) break;
        auto itr = lower_bound(B.begin(), B.end(), K-A[i]);
        ll index = distance(B.begin(), itr);
        if(index > M) continue;
        if(K-B[index]-A[i] < 0) index--;
        res = max(res, (i + index));
    }
    cout << res << endl;
}