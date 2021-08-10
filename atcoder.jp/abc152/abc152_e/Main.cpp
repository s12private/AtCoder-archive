//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll MOD = 1e9+7;
/*
 * n / a -> n * a^(-1) % m
 */
// mod. m での a の逆元 a^(-1) を計算する
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

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
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N){
        cin>>A[i];
    }

    map<ll, ll> a;
    rep(i, N){
        auto prime = prime_factor(A[i]);
        for(auto p : prime){
            a[p.first] = max(a[p.first], p.second);
        }
    }

    ll l = 1;
    for(auto p : a){
        for(ll i=1; i<=p.second; i++){
            l *= p.first;
            l %= MOD;
        }
    }

    ll res = 0;
    rep(i, N){
        res += l * modinv(A[i], MOD)%MOD;
        res %= MOD;
    }
    cout << res << endl;
}