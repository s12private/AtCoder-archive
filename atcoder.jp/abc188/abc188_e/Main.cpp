//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

bool compare_second(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> A(N);
    vector<pair<ll, ll>> p(N);
    rep(i, N){
        cin>>A[i];
        p[i].first = i, p[i].second = A[i];
    }

    sort(p.begin(), p.end(), compare_second);

    unordered_map<ll, vector<ll>> m;
    rep(i, M){
        ll X, Y; cin>>X>>Y;
        m[--X].push_back(--Y);
    }

    vector<bool> reached(N);
    vector<ll> res(N, -1e10);

    vector<ll> mn(N, 1e10);
    rep(i, N){
        if(reached[p[i].first]) continue;
        queue<ll> s;
        s.push(p[i].first);
        mn[p[i].first] = p[i].second;
        while(!s.empty()) {
            ll top = s.front();
            s.pop();
            for (ll v : m[top]) {
                if (reached[v]) continue;
                s.push(v);
                res[v] = A[v] - mn[top];
                mn[v] = min(mn[top], A[v]);
                reached[v] = true;
            }
        }
    }

    ll ans = -1e10;
    rep(i, N){
        chmax(ans, res[i]);
    }
    cout << ans << endl;
}