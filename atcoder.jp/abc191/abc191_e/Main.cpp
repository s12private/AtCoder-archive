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

template< typename T >
vector< T > dijkstra(WeightedGraph< T > &g, T s) {
    const auto INF = 1e18;
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

    WeightedGraph<ll> g(N);
    rep(i, M){
        ll A,B,C; cin>>A>>B>>C;
        A--, B--;
        g[A].push_back(edge(B, C));
    }

    vector dist(N, vector<ll>(N));
    rep(i, N){
        dist[i] = dijkstra(g, i);
    }

    rep(i, N){
        ll mn = 1e18;
        for(auto to : g[i]){
            if(to.to == i) chmin(mn, to.cost);
        }

        rep(j, N){
            if(i == j) continue;
            ll d = dist[i][j] + dist[j][i];
            chmin(mn, d);
        }
        cout << (mn >= 1e18 ? -1 : mn) << endl;
    }
}