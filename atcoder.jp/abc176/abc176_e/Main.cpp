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

bool compare_second(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll H,W,M; cin>>H>>W>>M;
    vector<ll> h(M), w(M);
    unordered_map<ll, ll> xm, ym;
    unordered_map<ll, map<ll, bool>> exist;
    rep(i, M){
        cin>>h[i]>>w[i];
        h[i]--, w[i]--;
        xm[w[i]]++;
        ym[h[i]]++;
        exist[h[i]][w[i]] = true;
    }

    vector<pair<ll, ll>> x, y;
    for(auto p : xm){
        x.push_back(p);
    }
    for(auto p : ym){
        y.push_back(p);
    }

    sort(x.rbegin(), x.rend(), compare_second);
    sort(y.rbegin(), y.rend(), compare_second);

    ll mx = x[0].second + y[0].second;
    for(ll i=0; i<y.size(); i++){
        for(ll j=0; j<x.size(); j++){
            ll c = x[j].second + y[i].second;
            if(c < mx-1) break;
            if(!exist[y[i].first][x[j].first]){
                cout << c << endl;
                return 0;
            }
        }
        if(x[0].second + y[i].second < mx-1){
            break;
        }
    }
    cout << mx-1 << endl;
}