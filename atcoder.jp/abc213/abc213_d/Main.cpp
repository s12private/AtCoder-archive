//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<ll> res;
vector<priority_queue<ll, vector<ll>, greater<ll>>> g;
bool reached[200005];
bool start = false;
void dfs(ll now){
    reached[now] = true;
    res.push_back(now);
    if(start && now == 0) return;
    start = true;

    while(!g[now].empty()){
        ll top = g[now].top();
        g[now].pop();
        if(reached[top]) continue;
        dfs(top);
        res.push_back(now);
    }
}

int main() {
    ll N; cin>>N;
    g = vector<priority_queue<ll, vector<ll>, greater<ll>>>(N);
    rep(i, N-1){
        ll A, B; cin>>A>>B;
        A--, B--;
        g[A].push(B);
        g[B].push(A);
    }

    dfs(0);
    rep(i, res.size()){
        cout << res[i]+1;
        if(i < res.size()-1) cout << " ";
    }
    cout << endl;
}