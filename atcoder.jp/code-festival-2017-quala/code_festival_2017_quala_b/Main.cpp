#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N, M,K; cin>>N>>M>>K;
    rep(i, N+1) rep(j, M+1){
        ll count = i*M + j*N - i*j*2;
        if(count == K){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}