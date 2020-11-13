#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll A, B, K; cin>>A>>B>>K;
    for(ll i=A; i<=B; i++){
        if(i < A+K || i > B-K) cout << i << endl;
    }
}