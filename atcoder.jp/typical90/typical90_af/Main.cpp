//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> A(N, vector<ll>(N));
    rep(i, N){
        rep(j, N){
            cin>>A[i][j];
        }
    }

    ll M; cin>>M;
    vector<vector<bool>> b(N, vector<bool>(N));
    rep(i, M){
        ll X,Y; cin>>X>>Y;
        X--, Y--;
        b[X][Y] = true;
        b[Y][X] = true;
    }

    vector<ll> a(N);
    rep(i, N) a[i] = i;
    ll res = 1e10;
    do{
        ll sum = 0;
        bool flag = false;
        rep(i, N){
            if(i != 0){
                if(b[a[i]][a[i-1]]) flag = true;
            }
            sum += A[a[i]][i];
        }
        if(!flag) chmin(res, sum);
    }while(next_permutation(a.begin(), a.end()));

    cout << (res == 1e10 ? -1 : res) << endl;
}