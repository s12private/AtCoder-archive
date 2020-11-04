#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N; cin>>N;
    ll sum = 0;
    for(ll i=1; i<=N; i++){
        sum += i;
        if(sum >= N){
            for(ll j=i; j>=1; j--){
                if(sum-N == j) continue;
                cout << j << endl;
            }
            return 0;
        }
    }
}