//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N), B(N), C(N);
    rep(i, N) cin>>A[i];
    rep(i, N) cin>>B[i];
    rep(i, N) cin>>C[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    ll b=0, c=0;
    ll res = 0;
    rep(i, N){
        auto itr = upper_bound(B.begin()+b, B.end(), A[i]);
        b = itr - B.begin();
        if(b >= N) break;
        itr = upper_bound(C.begin()+c, C.end(), B[b]);
        c = itr - C.begin();
        if(c >= N) break;
        res++;
        b++;
        c++;
    }

    cout << res << endl;
}