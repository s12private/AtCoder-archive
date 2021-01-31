#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<vector<pair<ll, ll>>> a(N);
    rep(i, N){
        ll A; cin>>A;
        rep(j, A){
            ll x, y; cin>>x>>y;
            x--;
            a[i].push_back(make_pair(x, y));
        }
    }

    int n = N;
    ll res = 0;
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<ll> b(N, -1), c(N);
        bool flag = false;
        ll count = 0;
        for (int ii = 0; ii < n; ++ii) {
            if (bit & (1<<ii)) {
                count++;
                c[ii] = true;
                for(auto v : a[ii]){
                    ll x = v.first;
                    ll y = v.second;
                    if(b[x] == -1 || b[x] == y) b[x] = y;
                    else flag = true;
                }
            }
        }
        if(!flag){
            rep(i, N){
                if(b[i] != -1 && b[i] != c[i]) flag = true;
            }
        }
        if(!flag) res = max(res, (ll)count);
    }
    cout << res << endl;
}