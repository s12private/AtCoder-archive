#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    map<ll, map<ll, bool>> m;
    ll count = 0;
    rep(i, N){
        ll a; cin>>a;
        m[i][a-1] = true;
        if(m[a-1][i]) count++;
    }

    cout << count << endl;
}