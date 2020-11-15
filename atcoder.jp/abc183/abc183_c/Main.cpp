#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, K; cin>>N>>K;
    vector<vector<ll>> T(N, vector<ll>(N));

    rep(i, N){
        rep(j, N) cin>>T[i][j];
    }

    vector<ll> array(N-1);
    for(ll i=0; i<N-1; i++){
        array[i] = i+1;
    }
    ll count = 0;
    do{
        ll sum = T[0][array[0]];
        for (int i = 1; i < N-1; i++) {
            //cout << array[i-1] << "->" << array[i] << ":" << T[array[i-1]][array[i]] << endl;
            sum += T[array[i-1]][array[i]];
        }
        sum += T[array.back()][0];
        //cout << sum << endl;
        if(sum == K) count++;
    }while(next_permutation(array.begin(), array.end()));
    cout << count << endl;
}