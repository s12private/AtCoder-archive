//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K; cin>>N>>K;
    vector<pair<ll, ll>> A(N);
    vector<ll> b(N);
    rep(i, N){
        cin>>A[i].first;
        b[i] = A[i].first;
    }

    sort(A.begin(), A.end());
    ll index = 0;
    rep(i, N){
        A[i].second = index;
        index++;
    }
    map<ll, ll> m;
    rep(i, N){
        ll j = A[i].second+1;
        m[A[i].first] = K/N + (j <= K%N);
    }

    rep(i, N){
        cout << m[b[i]] << endl;
    }
}