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
    rep(i, N-1){
        ll A,B; cin>>A>>B;
        A--, B--;
        g[A].push_back(B);
        g[B].push_back(A);
    }

    queue<ll> que;
    que.push(0);
    vector<ll> reached(N);
    reached[0] = 1;
    vector<ll> res;
    while(!que.empty()){
        ll top = que.front();
        que.pop();
        for(ll v : g[top]){
            if(reached[v] != 0) continue;
            if(reached[top] == 1){
                reached[v] = 2;
                res.push_back(v);
            }
            else reached[v] = 1;
            que.push(v);
        }
    }

    ll n = 2;
    if(res.size() < N/2) n = 1;
    ll count = 0;
    rep(i, N){
        if(reached[i] == n){
            cout << i+1;
            count++;
            if(count < N/2) cout << " ";
        }
        if(count >= N/2 )break;
    }
    cout << endl;
}