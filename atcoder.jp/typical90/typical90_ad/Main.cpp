//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
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
    ll N, K; cin>>N>>K;

    auto p = primes(N);

    vector<ll> a(N+1);

    for(auto b : p){
        for(ll i=1; i*b<=N; i++){
            a[i*b]++;
        }
    }

    ll res = 0;
    for(ll i=1; i<=N; i++){
        if(a[i] >= K) res++;
    }
    cout << res << endl;
}