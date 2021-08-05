//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

int main() {
    ll K; cin>>K;

    ll res = 0;
    auto div = divisor(K);

    for(ll i=0; i<div.size(); i++){
        for(ll j=i; j<div.size(); j++){
            ll a = div[i];
            ll b = div[j];
            if(K/a < b || K/b < a) continue;
            if(K%(a*b) != 0) continue;
            ll c = K/(a*b);
            if(c >= a && c >= b) res++;
        }
    }

    cout << res << endl;
}