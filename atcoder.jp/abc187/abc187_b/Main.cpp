//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> x(N), y(N);
    rep(i, N) cin>>x[i]>>y[i];

    ll res = 0;
    rep(i, N){
        for(ll j=i+1; j<N; j++){
            double m = (double)(y[i]-y[j])/(x[i]-x[j]);
            if(abs(m) <= 1) res++;
        }
    }
    cout << res << endl;
}