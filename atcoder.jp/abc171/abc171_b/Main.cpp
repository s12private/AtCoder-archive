#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int K,N; cin>>N>>K;
    int p[N];
    rep(i, N){
        cin>>p[i];
    }

    sort(p, p+N);
    long sum = 0;
    rep(i, K){
        sum += p[i];
    }


    cout << sum << endl;
}
