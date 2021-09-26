//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];
    ll X; cin>>X;

    ll sum = 0;
    rep(i, N) sum += A[i];

    ll res = X/sum * N;
    ll resSum = X/sum*sum;
    rep(i, N){
        resSum += A[i];
        res++;
        if(resSum > X) {
            cout << res << endl;
            return 0;
        }
    }
}