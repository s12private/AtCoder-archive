//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll X,Y,A,B,C; cin>>X>>Y>>A>>B>>C;
    vector<ll> p(A),q(B),r(C);
    rep(i, A) cin>>p[i];
    rep(i, B) cin>>q[i];
    rep(i, C) cin>>r[i];

    sort(p.rbegin(), p.rend());
    sort(q.rbegin(), q.rend());
    sort(r.rbegin(), r.rend());

    vector<ll> a;
    rep(i, X) a.push_back(p[i]);
    rep(i, Y) a.push_back(q[i]);
    rep(i, C) a.push_back(r[i]);

    sort(a.rbegin(), a.rend());
    ll res = 0;
    rep(i, X+Y){
        res += a[i];
    }

    cout << res << endl;
}