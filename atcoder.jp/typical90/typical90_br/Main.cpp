//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> X(N), Y(N);
    rep(i, N){
        cin>>X[i]>>Y[i];
    }

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    double x = X[N/2];
    double y = Y[N/2];
    if(N%2 == 0){
        x = (X[N/2-1] + X[N/2])/2.0;
        y = (Y[N/2-1] + Y[N/2])/2.0;
    }

    double res = 0;
    rep(i, N){
        res += abs(x-X[i]) + abs(y-Y[i]);
    }
     cout << fixed << setprecision(0) << res << endl;
}