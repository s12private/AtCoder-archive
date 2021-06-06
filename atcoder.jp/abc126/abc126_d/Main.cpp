#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    map<ll, map<ll, ll>> m;
    vector<vector<pair<ll, ll>>> a(N);
    rep(i, N-1){
        ll u,v,w; cin>>u>>v>>w;
        u--, v--;
        a[u].push_back(make_pair(v, w));
        a[v].push_back(make_pair(u, w));
    }

    stack<ll> st;
    vector<bool> reached(N);
    vector<ll> dist(N);
    st.push(0);
    reached[0] = true;
    while(!st.empty()){
        ll top = st.top();
        st.pop();
        for(auto p : a[top]){
            ll v = p.first;
            ll w = p.second;
            if(reached[v]) continue;
            dist[v] = w+dist[top];
            reached[v] = true;
            st.push(v);
        }
    }

    rep(i, N){
        cout << dist[i]%2 << endl;
    }
}