#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll N; cin>>N;
    vector<ll> C(N), S(N), F(N);
    rep(i, N-1) cin>>C[i]>>S[i]>>F[i];

    rep(i, N){
        ll res = 0;
        for(ll j=i; j<N-1; j++){
            if(res < S[j]) res = C[j] + S[j];
            else if(res%F[j] == 0) res += C[j];
            else res += C[j] + F[j] - res%F[j];
        }
        cout << res << endl;
    }
}