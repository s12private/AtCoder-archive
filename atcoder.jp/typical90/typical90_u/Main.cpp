//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template< typename T = int >
struct Edge {
    int from, to;
    T cost;
    int idx;

    Edge() = default;

    Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}

    operator int() const { return to; }
};

template< typename T = int >
struct Graph {
    vector< vector< Edge< T > > > g;
    int es;

    Graph() = default;

    explicit Graph(int n) : g(n), es(0) {}

    size_t size() const {
        return g.size();
    }

    void add_directed_edge(int from, int to, T cost = 1) {
        g[from].emplace_back(from, to, cost, es++);
    }

    void add_edge(int from, int to, T cost = 1) {
        g[from].emplace_back(from, to, cost, es);
        g[to].emplace_back(to, from, cost, es++);
    }

    void read(int M, int padding = -1, bool weighted = false, bool directed = false) {
        for(int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            a += padding;
            b += padding;
            T c = T(1);
            if(weighted) cin >> c;
            if(directed) add_directed_edge(a, b, c);
            else add_edge(a, b, c);
        }
    }
};

/*
 * StronglyConnectedComponents(g):= グラフgで初期化する。
 * build(): 強連結成分分解する. dag には縮約後の頂点と辺からなるDAGが格納される.
 * comp には各頂点が属する強連結成分の頂点番号が格納される.
 * group には各強連結成分について, それに属する頂点が格納される.
 */
template< typename T >
struct StronglyConnectedComponents : Graph< T > {
public:
    using Graph< T >::Graph;
    using Graph< T >::g;
    vector< int > comp;
    Graph< T > dag;
    vector< vector< int > > group;

    void build() {
        rg = Graph< T >(g.size());
        for(int i = 0; i < g.size(); i++) {
            for(auto &e : g[i]) {
                rg.add_directed_edge(e.to, e.from, e.cost);
            }
        }
        comp.assign(g.size(), -1);
        used.assign(g.size(), 0);
        for(int i = 0; i < g.size(); i++) dfs(i);
        reverse(begin(order), end(order));
        int ptr = 0;
        for(int i : order) if(comp[i] == -1) rdfs(i, ptr), ptr++;
        dag = Graph< T >(ptr);
        for(int i = 0; i < g.size(); i++) {
            for(auto &e : g[i]) {
                int x = comp[e.from], y = comp[e.to];
                if(x == y) continue;
                dag.add_directed_edge(x, y, e.cost);
            }
        }
        group.resize(ptr);
        for(int i = 0; i < g.size(); i++) {
            group[comp[i]].emplace_back(i);
        }
    }

    int operator[](int k) const {
        return comp[k];
    }

private:
    vector< int > order, used;
    Graph< T > rg;

    void dfs(int idx) {
        if(exchange(used[idx], true)) return;
        for(auto &to : g[idx]) dfs(to);
        order.push_back(idx);
    }

    void rdfs(int idx, int cnt) {
        if(comp[idx] != -1) return;
        comp[idx] = cnt;
        for(auto &to : rg.g[idx]) rdfs(to, cnt);
    }
};


int main() {
    ll N,M; cin>>N>>M;
    StronglyConnectedComponents<ll> scc(N);

    rep(i, M){
        ll A,B; cin>>A>>B;
        A--, B--;
        scc.add_directed_edge(A, B);
    }

    scc.build();

    ll res = 0;
    rep(i, scc.group.size()){
        ll a = scc.group[i].size();
        res += (a*(a-1))/2;
    }
    cout << res << endl;
}