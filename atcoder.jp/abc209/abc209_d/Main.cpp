//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, Q; cin>>N>>Q;
    vector<vector<ll>> g(N, vector<ll>());
    rep(i, N-1){
        ll a,b; cin>>a>>b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<ll> dis(N, -1);

    queue<ll> que;
    que.push(0);
    dis[0] = 0;

    while(!que.empty()){
        ll top = que.front();
        que.pop();
        for(ll v : g[top]){
            if(dis[v] != -1) continue;
            dis[v] = dis[top]+1;
            que.push(v);
        }
    }

    rep(i, Q){
        ll c, d; cin>>c>>d;
        c--, d--;
        cout << (dis[c]%2 == dis[d]%2 ? "Town" : "Road") << endl;
    }
}