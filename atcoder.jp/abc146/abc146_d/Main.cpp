//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> t(N);
    vector<pair<ll, ll>> p(N-1);
    vector<ll> parent(N);
    rep(i, N-1){
        ll a,b; cin>>a>>b;
        a--, b--;
        t[a].push_back(b);
        p[i].first = a, p[i].second = b;
        parent[b] = a;
    }

    stack<ll> s;
    s.push(0);
    map<ll, map<ll, ll>> m;
    ll mx = 0;
    while(!s.empty()){
        ll top = s.top();
        s.pop();
        ll c = 1;
        for(ll v : t[top]){
            s.push(v);
            if(m[parent[top]][top] == c) c++;
            m[top][v] = c;
            chmax(mx, c);
            c++;
        }
    }
    cout << mx << endl;
    rep(i, N-1){
        cout << m[p[i].first][p[i].second] << endl;
    }
}