//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template< typename T >
struct edge {
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< Edges< T > >;
const auto INF = numeric_limits< ll >::max();
template< typename T >
vector< T > dijkstra(WeightedGraph< T > &g, T s, ll k) {
    vector< T > dist(g.size(), INF);

    using Pi = pair< T, int >;
    priority_queue< Pi, vector< Pi >, greater< Pi > > que;
    dist[s] = 0;
    que.emplace(dist[s], s);
    while(!que.empty()) {
        T cost;
        int idx;
        tie(cost, idx) = que.top();
        que.pop();
        if(dist[idx] < cost) continue;
        for(auto &e : g[idx]) {
            if(e.to > k && e.to != s) continue;
            auto next_cost = cost + e.cost;
            if(dist[e.to] <= next_cost) continue;
            dist[e.to] = next_cost;
            que.emplace(dist[e.to], e.to);
        }
    }
    return dist;
}

vector<ll> get_path(const vector<ll> &prev, ll t) {
    vector<ll> path;
    for (ll cur = t; cur != -1; cur = prev[cur]) {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    ll N, M; cin>>N>>M;


    ll inf = 1e11;
    WeightedGraph<ll> graph(N);
    vector<vector<ll>> g(N, vector<ll>(N, inf));
    rep(i, M){
        ll A,B,C; cin>>A>>B>>C;
        A--, B--;
        graph[A].push_back(edge(B, C));
        g[A][B] = C;
    }

    rep(i, N){
        g[i][i] = 0;
    }

    ll res = 0;
    vector<vector<ll>> d(g);
    for(int l=1; l<=N; l++){
        //for (int k = 0; k < l; k++) {       // 経由する頂点
            for (int i = 0; i < N; i++) {    // 始点
                for (int j = 0; j < N; j++) {  // 終点
                    d[i][j] = min(d[i][j], d[i][l-1] + d[l-1][j]);
                }
            }
        //}
        //cout << l << ":" << endl;
        rep(i, N){
            rep(j, N){
                if(d[i][j] != inf){
                    //cout << i << " " << j << " " << d[i][j] << endl;
                    res += d[i][j];
                }
            }
        }
    }
    cout << res << endl;
}