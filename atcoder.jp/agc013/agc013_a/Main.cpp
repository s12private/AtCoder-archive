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

    bool up = false;
    bool changed = true;
    ll count = 0;
    for(ll i=1; i<N; i++){
        if(changed){
            if(A[i-1] == A[i]) continue;
            up = A[i-1] < A[i];
            count++;
            changed = false;
            continue;
        }

        if(up && A[i-1] > A[i]){
            changed = true;
        }
        if(!up && A[i-1] < A[i]){
            changed = true;
        }
    }

    cout << count+changed << endl;
}