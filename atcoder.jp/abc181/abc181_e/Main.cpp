//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,M; cin>>N>>M;
    vector<ll> H(N), W(M);
    rep(i, N) cin>>H[i];
    rep(i, M) cin>>W[i];

    sort(H.begin(), H.end());

    vector<ll> l(N+1), r(N+1), a(N+2);

    for(ll i=2; i<=N; i+=2){
        l[i] = H[i-1] - H[i-2] + l[i-2];
    }
    for(ll i=3; i<=N; i+=2){
        l[i] = l[i-1];
    }
    for(ll i=N-2; i>=0; i-=2){
        r[i] = H[i+1] - H[i] + r[i+2];
    }
    for(ll i=N-3; i>=0; i-=2){
        r[i] = r[i+1];
    }

    a[0] = r[0];
    a[N+1] = l[N-1];
    for(ll i=1; i<N+1; i++){
        a[i] = l[i-1] + r[i-1];
    }
    sort(W.begin(), W.end());
    ll res = 1e10;
    for(ll w : W){
        ll index = lower_bound(H.begin(), H.end(), w) - H.begin();
        if(index%2 == 0){
            chmin(res, H[index]-w + l[index]+r[index]);
        }else{
            chmin(res, w-H[index-1] + l[index]+r[index]);
        }
    }
    cout << res << endl;
}