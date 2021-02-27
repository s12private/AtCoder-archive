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
    ll K; cin>>K;
    string S, T; cin>>S>>T;
    vector<ll> nT(11), nA(11), rem(11, K);
    rep(i, 4){
        nT[S[i]-'0']++;
        nA[T[i]-'0']++;
        rem[S[i]-'0']--;
        rem[T[i]-'0']--;
    }
    double res = 0;
    ll num = K*9-8;
    ll n = 0;
    for(ll j=1; j<=9; j++){
        ll sT = 0;
        if(rem[j] < 1) continue;
        for(ll k=1; k<=9; k++){
            sT += k*pow(10, nT[k]+(k==j));
        }
        double kT = (double)(rem[j])/num;
        double kA = 0;
        for(ll l=1; l<=9; l++){
            ll sA = 0;
            if(rem[l]-(j==l) < 1) continue;
            for(ll m=1; m<=9; m++){
                sA += m*pow(10, nA[m]+(m==l));
            }
            if(sT > sA){
                double kA = (double)(rem[l]-(l==j))/(num-1);
                res += kT*kA;
                n++;
            }
        }
    }
    cout << fixed << setprecision(10) << res << endl;
}