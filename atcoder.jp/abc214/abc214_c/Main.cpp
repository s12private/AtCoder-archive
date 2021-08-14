//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> S(N), T(N), res(N, 1e18);
    rep(i, N) cin>>S[i];
    rep(i, N){
        cin>>T[i];
        chmin(res[i], T[i]);
    }
    //sort(p.begin(), p.end());


    rep(i, N-1){
        chmin(res[i+1], res[i] + S[i]);
    }
    chmin(res[0], res[N-1] + S[N-1]);
    rep(i, N-1){
        chmin(res[i+1], res[i] + S[i]);
    }
    rep(i, N){
        cout << res[i] << endl;
    }
}