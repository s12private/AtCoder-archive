#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template< typename T >
vector< vector< T > > nCk_table(int N) {
    vector< vector< T > > mat(N + 1, vector< T >(N + 1));
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) mat[i][j] = 1;
            else mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
    }
    return mat;
}

int main() {
    ll A,B,K; cin>>A>>B>>K;
    vector<vector<ll>> table = nCk_table<ll>(60);

    while(A+B>0){
        ll x = 0;
        if(A >= 1) x = table[A+B-1][A-1];
        if(K <= x){
            cout << "a";
            A--;
        }else{
            cout << "b";
            B--;
            K -= x;
        }
    }
    cout << endl;
}