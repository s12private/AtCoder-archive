#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll m, n, N; cin>>m>>n>>N;

    ll count = N;
    while(N >= m){
        count += n*(N/m);
        N = n*(N/m) + N%m;
    }
    cout << count << endl;
}