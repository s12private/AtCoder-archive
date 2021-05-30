#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i];
    rep(i, N) cin>>B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll res = 0;
    rep(i, N){
        res += abs(A[i]-B[i]);
    }
    cout << res << endl;
}