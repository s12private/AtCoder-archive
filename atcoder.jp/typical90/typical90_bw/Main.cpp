//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll prime_factor(ll n) {
    ll res = 0;
  for(ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      res++;
      n /= i;
    }
  }
  if(n != 1) res++;
  return res;
}

int main() {
    ll N; cin>>N;

    ll sum = prime_factor(N);
    cout << ceil(log2(sum)) << endl;
}