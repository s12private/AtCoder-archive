#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

vector<vector<ll>> tree;
bool reached[200005];

void dfs(ll p, ll c, vector<ll> &counter){
    if(p != -1) counter[c] += counter[p];

    for(ll child : tree[c]){
        if(reached[child]) continue;
        if(p == child) continue;
        reached[child] = true;
        dfs(c, child, counter);
    }
}

int main() {
    ll N,Q; cin>>N>>Q;
    tree.assign(N, vector<ll>());
    rep(i, N-1){
        ll a, b; cin>>a>>b;
        tree[a-1].push_back(b-1);
        tree[b-1].push_back(a-1);
    }

    vector<ll> counter(N);
    rep(i, Q){
        ll p, x; cin>>p>>x;
        counter[p-1] += x;
    }

    vector<bool> reached(N);
    dfs(-1, 0, counter);
    rep(i, N){
        cout << counter[i] << (i != N-1 ? " " : "");
    }
    cout << endl;
}