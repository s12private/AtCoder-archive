#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K, S; cin>>N>>K>>S;

    for(ll i=0; i<N; i++){
        cout << (i<K ? S : S==1e9 ? 1 : S+1) << (i==N-1 ? "" : " ");
    }
}