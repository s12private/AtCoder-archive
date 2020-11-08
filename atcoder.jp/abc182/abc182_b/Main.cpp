#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];
    sort(A.begin(), A.end());
    ll ans = 0;
    ll in = 2;
    for(ll i=2; i<=A.back(); i++){
        ll count = 0;
        for(ll a : A){
            if(a%i == 0) count++;
        }
        if(ans <= count){
            ans = count;
            in = i;
        }
    }
    cout << in << endl;
}