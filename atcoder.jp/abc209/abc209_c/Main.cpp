//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    ll res = 1;
    ll mod = 1e9+7;
    vector<ll> C(N);
    rep(i, N) cin>>C[i];
    sort(C.begin(), C.end());

    rep(i, N){
        res *= max(C[i]-i, (ll)0);
        res %= mod;
    }
    cout << res << endl;
}