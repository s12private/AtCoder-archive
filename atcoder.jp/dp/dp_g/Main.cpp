//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

using Graph = vector<vector<ll>>;

int main() {
    ll N, M; cin>>N>>M;
    Graph g(N);
    vector<ll> count(N);
    rep(i, M){
        ll x, y; cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        count[y]++;
    }

    queue<ll> que;
    rep(i, N){
        if(count[i] == 0) que.push(i);
    }

    vector<ll> dist(N);
    ll res = 0;
    while(!que.empty()){
        ll top = que.front();
        que.pop();
        for(auto to : g[top]){
            count[to]--;
            if(count[to] == 0){
                que.push(to);
                dist[to] += dist[top]+1;
                chmax(res, dist[to]);
            }
        }
    }
    cout << res << endl;
}