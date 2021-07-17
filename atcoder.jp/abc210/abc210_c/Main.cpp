//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> c(N);
    rep(i, N){
        cin>>c[i];
    }

    unordered_map<ll, ll> a;
    ll sum = 0;
    ll mx = 0;
    rep(i, K){
        a[c[i]]++;
        if(a[c[i]] == 1) sum++;
        chmax(mx, sum);
    }

    for(ll i=K; i<N; i++){
        a[c[i-K]]--;
        if(a[c[i-K]] == 0) sum--;
        a[c[i]]++;
        if(a[c[i]] == 1) sum++;
        chmax(mx, sum);
    }
    cout << mx << endl;
}