#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll N, M; cin>>N>>M;
    vector<string> A(N), B(M);
    rep(i, N) cin>>A[i];
    rep(i, M) cin>>B[i];

    bool isOK = false;
    for(ll i=0; i<N-M+1; i++){
        for(ll j=0; j<N-M+1; j++){
            bool flag = false;
            for(ll y=0; y<M; y++){
                for(ll x=0; x<M; x++){
                    if(A[i+y][j+x] != B[y][x]) flag = true;
                }
            }
            if(!flag) isOK = true;
        }
    }
    cout << (isOK ? "Yes" : "No") << endl;
}