//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, M; cin>>N>>M;
    vector<vector<ll>> g(N);
    rep(i, M){
        ll a,b; cin>>a>>b;
        a--, b--;
        g[max(a, b)].push_back(min(a, b));
    }

    ll res = 0;
    rep(i, N){
        if(g[i].size() == 1){
            res++;
        }
    }
    cout << res << endl;
}