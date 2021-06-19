//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<ll> res, C;
bool reached[(ll)1e6];
vector<vector<ll>> g;
unordered_map<ll, ll> m;

void dfs(ll now){
    if(m[C[now]] == 0) res.push_back(now);
    m[C[now]]++;

    for(ll a : g[now]){
        if(reached[a]) continue;
        reached[a] = true;
        dfs(a);
    }
    m[C[now]]--;
}


int main() {
    ll N; cin>>N;
    C = vector<ll>(N);
    rep(i, N) cin>>C[i];

    g = vector<vector<ll>>(N);

    rep(i, N-1){
        ll A,B; cin>>A>>B;
        A--, B--;
        g[A].push_back(B);
        g[B].push_back(A);
    }

    unordered_map<ll, ll> m;
    reached[0] = true;
    dfs(0);
    sort(res.begin(), res.end());

    rep(i, res.size()){
        cout << res[i]+1 << endl;
    }
}