#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll count = 1;
    rep(i, N){
        if(A[i]%2 == 0) count*=2;
    }

    cout << pow(3, N)-count << endl;
}