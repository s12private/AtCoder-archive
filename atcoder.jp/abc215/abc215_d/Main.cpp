//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

unordered_map<ll, ll> m;

void divisor(ll n) {
    m[n]++;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      m[i]++;
      if(i * i != n) m[n/i]++;
    }
  }
}

bool divisor2(ll n) {
  vector<ll> ret;
  for(ll i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      if(m[i] != 0) return false;
    }
  }
  return true;
}


int main() {
    ll N, M; cin>>N>>M;
    vector<ll> A(N), B(1e5+1), C(1e5+1);
    rep(i, N){
        cin>>A[i];
        B[A[i]]++;
    }

    vector<ll> res;
    res.push_back(1);
    for(ll i=2; i<=M; i++){
        bool flag = false;
        for(ll j=1; i*j<=1e5; j++){
            if(B[i*j] > 0){
                flag = true;
                break;
            }
        }
        if(flag) {
            for(ll j=1; i*j<=1e5; j++){
                C[i*j]++;
            }
        }
    }

    for(ll i=2; i<=M; i++){
        if(C[i] == 0) res.push_back(i);
    }

    cout << res.size() << endl;
    rep(i, res.size()){
        cout << res[i] << endl;
    }
}