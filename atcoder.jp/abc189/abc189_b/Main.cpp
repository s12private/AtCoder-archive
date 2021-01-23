#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, X; cin>>N>>X;
    vector<ll> V(N), P(N);
    rep(i, N) cin>>V[i]>>P[i];

    double sum = 0;
    rep(i, N){
        sum += V[i]*P[i];
        if(sum > X*100){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}