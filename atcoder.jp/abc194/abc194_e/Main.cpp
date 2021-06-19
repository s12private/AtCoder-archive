//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,M; cin>>N>>M;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    vector<vector<ll>> a(N+1);
    rep(i, N){
        a[A[i]].push_back(-1);
    }
    rep(i, N){
        a[A[i]].push_back(i);
    }
    rep(i, N){
        a[A[i]].push_back(N);
    }

    rep(i, N+1){
        bool flag = false;
        rep(j, a[i].size()-1){
            if(a[i][j+1] - a[i][j] > M){
                flag = true;
                break;
            }
        }

        if(flag || a[i].size() == 0){
            cout << i << endl;
            return 0;
        }
    }
}