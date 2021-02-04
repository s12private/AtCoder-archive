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

vector<ll> primes( const ll N ){
    vector<bool> is_prime( N + 1 );
    for( ll i = 0; i <= N; i++ ){
        is_prime[ i ] = true;
    }
    vector<ll> P;
    for( ll i = 2; i <= N; i++ ){
        if( is_prime[ i ] ){
            for( int j = 2 * i; j <= N; j += i ){
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    ll mx = 0;
    rep(i, N){
        cin>>A[i];
        chmax(mx, A[i]);
    }

    vector<ll> count(mx+1);
    rep(i, N){
        count[A[i]]++;
    }

    auto prime = primes(mx);
    bool flag = false;
    for(ll a : prime){
        ll c = 0;
        for(ll i=1; a*i <= mx; i++){
            c += count[a*i];
        }
        if(c > 1) flag = true;
    }

    if(!flag){
        cout << "pairwise coprime" << endl;
        return 0;
    }

    ll g = A[0];
    rep(i, N){
        g = gcd(g, A[i]);
    }
    if(g == 1){
        cout << "setwise coprime" << endl;
    }else{
        cout << "not coprime" << endl;
    }
}