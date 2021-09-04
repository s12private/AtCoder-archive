//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> p(N);
    rep(i, N) cin>>p[i];
    vector<ll> res(N);

    rep(i, N){
        res[p[i]-1] = i+1;
    }

    rep(i, N){
        cout << res[i];
        if(i < N-1) cout << " ";
    }
    cout << endl;
}