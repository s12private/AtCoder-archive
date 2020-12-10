//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll N; cin>>N;
    vector<pair<ll, ll>> p(N);
    rep(i, N){
        ll X,L; cin>>X>>L;
        p[i] = make_pair(X+L, X-L);
    }

    sort(p.begin(), p.end());

    ll left = -2e9;
    ll res = 0;
    rep(i, N){
        if(p[i].second >= left){
            res++;
            left = max(left, p[i].first);
        }
    }
    cout << res << endl;
}