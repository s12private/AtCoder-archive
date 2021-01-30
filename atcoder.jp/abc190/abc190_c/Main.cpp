//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M; cin>>N>>M;
    vector<pair<ll, ll>> r(M), rr;
    rep(i, M){
        ll A, B; cin>>A>>B;
        A--; B--;
        r[i].first = A;
        r[i].second = B;
    }

    ll K; cin>>K;

    vector<pair<ll, ll>> p(K);
    rep(i, K){
        ll c, d; cin>>c>>d;
        c--; d--;
        p[i].first = c;
        p[i].second = d;
    }

    int n = K;
    ll mx = 0;
    for (int bit = 0; bit < (1<<n); ++bit) {
        ll res = 0;
        vector<ll> count(N);
        for (int ii = 0; ii < n; ++ii) {
            if (bit & (1<<ii)) {
                count[p[ii].first]++;
            }else {
                count[p[ii].second]++;
            }
        }
        rep(i, M){
            ll a = r[i].first;
            ll b = r[i].second;
            if(count[a]>0 && count[b]>0) res++;
        }

        mx = max(res, mx);
    }
    cout << mx <<endl;
}


