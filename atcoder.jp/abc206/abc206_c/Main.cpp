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

    unordered_map<ll, ll> m;
    ll res = 0;
    m[A[0]]++;
    for(ll i=1; i<N; i++){
        res += i-m[A[i]];
        m[A[i]]++;
    }
    cout << res << endl;
}