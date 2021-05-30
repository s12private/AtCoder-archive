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
    ll N,K;cin>>N>>K;

    map<ll, ll> m;
    rep(i, N){
        ll A, B; cin>>A>>B;
        m[A] += B;
    }

    ll now = 0;
    for(auto v : m){
        ll a=v.first, b=v.second;
        if(K < a){
            cout << K << endl;
            return 0;
        }
        K += b;
    }
    cout << K << endl;
}