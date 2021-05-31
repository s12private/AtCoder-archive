#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(46), B(46), C(46);
    rep(i, N){
        ll a; cin>>a;
        A[a%46]++;
    }
    rep(i, N){
        ll a; cin>>a;
        B[a%46]++;
    }
    rep(i, N){
        ll a; cin>>a;
        C[a%46]++;
    }

    ll res = 0;
    rep(i, 46){
        rep(j, 46){
            rep(k, 46){
                if((i+j+k)%46 == 0){
                    res += A[i]*B[j]*C[k];
                }
            }
        }
    }
    cout << res << endl;
}