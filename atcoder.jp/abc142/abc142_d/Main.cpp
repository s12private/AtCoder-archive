//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

map<ll,ll> prime_factor(ll n) {
  map<ll, ll> ret;
  for(ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

int main() {
    ll A,B; cin>>A>>B;
    auto pA = prime_factor(A);
    auto pB = prime_factor(B);

    ll ans = 0;
    for(auto p : pA){
        if(pB[p.first]) ans++;
    }

    cout << ans+1 << endl;
}