#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> a(3*N);
    rep(i, 3*N) cin>>a[i];

    sort(a.begin(), a.end());
    ll ans = 0;
    for(ll i=2*N-1; i>=N; i--){
        ans += a[i];
    }

    ll count = 0;
    ll ans2 = 0;
    for(ll i=3*N-2; count < N ; i-=2){
        count++;
        ans2 += a[i];
    }
    cout << max(ans, ans2) << endl;
}