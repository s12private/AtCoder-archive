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

    ll mn = 0;
    ll mx = 10000;
    rep(i, N){
        if(A[i] > B[i]){
            cout << 0 << endl;
            return 0;
        }
        chmax(mn, A[i]);
        chmin(mx, B[i]);
    }

    cout << max(mx-mn+1, (ll)0) << endl;
}