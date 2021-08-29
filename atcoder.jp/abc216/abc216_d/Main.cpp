//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<int> graph[200010];

bool topologicalSort(int V, int E, vector<int> &order) {
    assert(order.size() == 0);
    vector<int> indegree(V);
    for (int v = 0; v < V; ++v) {
        for (int nv : graph[v]) ++indegree[nv];
    }

    stack<int> st;
    for (int v = 0; v < V; ++v) {
        // 入次数0の点をstackにいれる
        if (indegree[v] == 0) st.push(v);
    }

    while (st.size() > 0) {
        int v = st.top(); st.pop();
        order.push_back(v);
        for (int nv : graph[v]) {
            --indegree[nv];
            if (indegree[nv] == 0) st.push(nv);
        }
    }

    return order.size() == V;
}

// vector
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
    int len = v.size();
    for (int i = 0; i < len; ++i) {
        s << v[i]; if (i < len - 1) s << " ";
    }
    return s;
}

int main() {
    ll N, M; cin>>N>>M;
    ll e = 0;
    for (int i = 0; i < M; ++i) {
        ll k; cin>>k;
        ll last = 0;
        rep(i, k){
            ll next; cin>>next;
            graph[last].push_back(next);
            last = next;
            e++;
        }
    }
    vector<int> order;
    bool is_dag = topologicalSort(N+1, e, order);

    if(is_dag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}