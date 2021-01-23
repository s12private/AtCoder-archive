//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<string> S(N);
    rep(i, N) cin>>S[i];

    ll zero = 1, one = 1;
    rep(i, N){
        if(i == 0){
            if(S[i] == "OR"){
                zero = 1;
                one = 3;
            }else{
                zero = 3;
                one = 1;
            }
            continue;
        }
        if(S[i] == "OR"){
            zero = zero;
            one = zero + 2*one;
        }else{
            zero = 2*zero+one;
            one = one;
        }
    }
    cout << one << endl;
}