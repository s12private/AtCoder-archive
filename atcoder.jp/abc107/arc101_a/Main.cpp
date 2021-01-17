//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;
    vector<ll> x(N);
    rep(i, N) cin>>x[i];

    ll res = 1e18;
    for(ll i=0; i<N-(K-1); i++){
        ll left = x[i];
        ll right = x[i+K-1];
        ll dis;
        if(left < 0){
            if(right > 0){
                dis = min(-2*left+right, -left+2*right);
            }else{
                dis = -left;
            }
        }else{
            dis = right;
        }
        res = min(res, dis);
    }
    cout << res << endl;
}