#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    ll res = 0;
    ll prev = 1;
    ll MOD = 1e9+7;
    rep(i, N){
        ll sum = 0;
        rep(j, 6){
            ll A; cin>>A;
            sum += prev*A%MOD;
            sum %= MOD;
        }
        res = sum;
        prev = sum;
    }
    cout << res << endl;
}