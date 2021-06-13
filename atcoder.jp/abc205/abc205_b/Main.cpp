//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    map<ll, ll> m;
    rep(i, N){
        ll A; cin>>A;
        m[A]++;
    }


    for(ll i=1; i<=N; i++){
        if(m[i] != 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}