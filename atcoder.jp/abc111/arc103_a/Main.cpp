//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll n; cin>>n;
    map<ll, ll> m1, m2;
    rep(i, n){
        ll v; cin>>v;
        if(i%2 == 0) m1[v]++;
        else m2[v]++;
    }

    vector<pair<ll, ll>> p1;
    for(auto p : m1){
        p1.push_back(p);
    }
    vector<pair<ll, ll>> p2;
    for(auto p : m2){
        p2.push_back(p);
    }

    sort(p1.rbegin(), p1.rend(), compare_by_b);
    sort(p2.rbegin(), p2.rend(), compare_by_b);

    if(p1[0].first == p2[0].first){
        p1.push_back(make_pair(0, 0));
        p2.push_back(make_pair(0, 0));
        ll ans = min(n/2-p1[0].second + n/2-p2[1].second, n/2-p1[1].second + n/2-p2[0].second);
        cout << ans << endl;
    }else{
        cout << n/2-p1[0].second + n/2-p2[0].second << endl;
    }
}