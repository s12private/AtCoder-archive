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
vector< T > dijkstra(WeightedGraph< T > &g, T s, vector<T> &prev) {
    const auto INF = numeric_limits< T >::max();
    vector< T > dist(g.size(), INF);
    prev.resize(g.size(), -1);

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
            ll wai = ceil(cost/(double)e.src)*e.src-cost;
            auto next_cost = cost + wai + e.cost;
            if(dist[e.to] <= next_cost) continue;
            dist[e.to] = next_cost;
            que.emplace(dist[e.to], e.to);
            prev[e.to] = idx;
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
    ll N,M,X,Y; cin>>N>>M>>X>>Y;
    X--, Y--;
    WeightedGraph<ll> g(N);
    rep(i, M){
        ll A,B,T,K; cin>>A>>B>>T>>K;
        A--, B--;
        g[A].push_back(edge(K, B, T));
        g[B].push_back(edge(K, A, T));
    }

    vector<ll> p;
    auto v = dijkstra(g, X, p);
    const auto INF = numeric_limits< ll >::max();
    cout << (v[Y]==INF ? -1 : v[Y]) << endl;
}