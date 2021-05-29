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
    sort(A.begin(), A.end());
    ll Q; cin>>Q;
    rep(i, Q){
        ll B; cin>>B;
        auto it = lower_bound(A.begin(), A.end(), B);
        ll index = it - A.begin();
        ll res = 1e10;
        if(index == 0) res = abs(B-A[0]);
        else if(index == N) res = abs(B-A[N-1]);
        else res = min(abs(B-A[index]), abs(B-A[index-1]));
        cout << res << endl;
    }
}