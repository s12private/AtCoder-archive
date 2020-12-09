#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<pair<ll, ll>> p;
    map<ll, vector<ll>> m;
    rep(i, M){
        ll P, M; cin>>P>>M;
        p.push_back(make_pair(P, M));
        m[P].push_back(M);
    }

    map<ll, map<ll, ll>> mm;
    for(auto v : m){
        sort(v.second.begin(), v.second.end());
        for(ll i=0; i<v.second.size(); i++){
            mm[v.first][v.second[i]] = i+1;
        }
    }

    for(auto a : p){
        cout << setfill('0') << setw(6) << a.first;
        cout << setfill('0') << setw(6) << mm[a.first][a.second] << endl;
    }
}