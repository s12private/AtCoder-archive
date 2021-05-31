//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> g(1001, vector<ll>(1001));
    rep(i, N){
        ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        for(ll x=x1; x<x2; x++){
            g[y1][x] += 1;
            g[y2][x] -= 1;
        }
    }

    map<ll, ll> m;
    rep(y, 1001){
        rep(x, 1001){
            if(y != 0) g[y][x] += g[y-1][x];
            m[g[y][x]]++;
        }
    }

    rep(i, N){
        cout << m[i+1] << endl;
    }
}