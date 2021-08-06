//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, Q; cin>>N>>Q;

    ll Xmn = 1e10, Xmx = -1e10, Ymn = 1e10, Ymx = -1e10;

    vector<pair<ll, ll>> p(N);
    rep(i, N){
        ll x, y; cin>>x>>y;
        p[i].first = x+y;
        p[i].second = x-y;
        y = p[i].first;
        x = p[i].second;
        chmin(Xmn, x);
        chmax(Xmx, x);
        chmin(Ymn, y);
        chmax(Ymx, y);
    }

    rep(i, Q){
        ll q; cin>>q;
        q--;
        ll y = p[q].first;
        ll x = p[q].second;
        cout << max({abs(x-Xmn), abs(x-Xmx), abs(y-Ymn), abs(y-Ymx)}) << endl;
    }
}