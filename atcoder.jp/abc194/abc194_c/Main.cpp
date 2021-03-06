//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    ll res = 0;
    rep(i, N){
        cin>>A[i];
        res += (N-1)*A[i]*A[i];
    }

    vector<ll> sum(N+1);
    reverse(A.begin(), A.end());
    rep(i, N){
        sum[i+1] = sum[i] + A[i];
    }
    //cout << res << endl;
    reverse(A.begin(), A.end());
    ll a = 0;
    rep(i, N-1){
        res -= 2*A[i]*(sum[N-i-1]);
        a += (N-1)*A[i]*(sum[N-i-1]);
        //cout << A[i] << "," << sum[N-i-1]<< endl;
    }
    //cout << a << endl;
    cout << res << endl;
}