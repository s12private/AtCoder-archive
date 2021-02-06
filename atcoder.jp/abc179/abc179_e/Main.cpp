#define _GLIBCXX_DEBUG
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
    ll N,X,M; cin>>N>>X>>M;
    vector<ll> index(M, -1), A, sum;
    index[X] = 0;
    A.push_back(X);
    sum.push_back(X);
    for(ll i=1; i<N; i++){
        ll last = X;
        X = (X*X)%M;
        A.push_back(X);
        sum.push_back(X + sum.back());
        if(index[X] != -1){
            ll leftIndex = index[X]-1;
            ll leftSum = 0;
            if(leftIndex != -1)
                leftSum = sum[leftIndex];
            ll an = i-index[X];
            ll remain = N-leftIndex-1;
            ll n = remain/an;
            ll sumn = sum[index[last]]-leftSum;
            ll sn = n*sumn;
            ll yet = N - (leftIndex + an*n) - 1;

            ll right = 0;
            if(index[X]+yet > 0)
                right = sum[index[X]+yet-1]-leftSum;
            cout << leftSum + sn + right << endl;
            return 0;
        }
        index[X] = i;
    }
    cout << sum.back() << endl;
}