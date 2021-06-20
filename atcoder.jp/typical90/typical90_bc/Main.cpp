#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,P,Q; cin>>N>>P>>Q;

    vector<ll> A(N);
    map<ll, ll> m;
    rep(i, N){
        cin>>A[i];
        m[A[i]]++;
    }

    ll res = 0;
    rep(i, N){
        for(ll j=i+1; j<N; j++){
            for(ll k=j+1; k<N; k++){
                for(ll l=k+1; l<N; l++){
                    for(ll m=l+1; m<N; m++){
                        ll a = (A[i]*A[j])%P;
                        a *= A[k];
                        a %= P;
                        a *= A[l];
                        a %= P;
                        a *= A[m];
                        a %= P;
                        if(a == Q) res++;
                    }
                }
            }
        }
    }
    cout << res << endl;
}