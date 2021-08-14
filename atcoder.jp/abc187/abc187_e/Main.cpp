//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> g(N);
    vector<ll> a(N), b(N);
    rep(i, N-1){
        cin>>a[i]>>b[i];
        a[i]--, b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vector<ll> dist(N, -1);
    queue<ll> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()){
        ll top = que.front();
        que.pop();
        for(ll to : g[top]){
            if(dist[to] != -1) continue;
            que.push(to);
            dist[to] = dist[top]+1;
        }
    }

    ll Q; cin>>Q;
    vector<ll> c(N);
    rep(i, Q){
        ll t, e, x; cin>>t>>e>>x;
        e--;
        ll from = a[e];
        ll to = b[e];
        if(t == 2) swap(to, from);
        if(dist[from] < dist[to]){
            c[0] += x;
            c[to] -= x;
        }else{
            c[from] += x;
        }
    }

    vector<bool> reached(N);
    que.push(0);
    reached[0] = true;
    while(!que.empty()){
        ll top = que.front();
        que.pop();

        for(ll to : g[top]){
            if(reached[to]) continue;

            que.push(to);
            reached[to] = true;
            c[to] += c[top];
        }
    }

    rep(i, N){
        cout << c[i] << endl;
    }
}