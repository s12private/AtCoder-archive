//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H,W,N; cin>>H>>W>>N;
    map<ll, ll> x, y;
    vector<pair<ll, ll>> c(N);
    rep(i, N){
        ll A,B; cin>>A>>B;
        y[A]++;
        x[B]++;
        c[i].first = A;
        c[i].second = B;
    }

    ll n = 1;
    for(auto a : x){
        x[a.first] = n;
        n++;
    }
    n = 1;
    for(auto a : y){
        y[a.first] = n;
        n++;
    }

    rep(i, N){
        ll cy = c[i].first;
        ll cx = c[i].second;
        cout << y[cy] << " " << x[cx] << endl;
    }
}