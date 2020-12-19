//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];
    sort(A.begin(), A.end());
    vector<ll> r(N+1), l(N+1);
    ll s = 0;
    rep(i, N){
        r[i+1] = r[i] + A[i];
        s += r[i+1];
    }
    ll m = 0;
    sort(A.rbegin(), A.rend());
    rep(i, N){
        r[i+1] = r[i] + A[i];
        m += r[i+1];
    }
    cout << abs(s-m) << endl;
    /*
    ll res = 0;
    for(ll i=0; i<N; i++){
        for(ll j=i+1; j<N; j++){
            res += abs(A[i]-A[j]);
        }
    }
    cout << res << endl;

   cout << s-(s-m) << endl;
     */

}