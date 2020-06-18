#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    long N; cin>>N;

    long count = 0;
    long p[N];
    rep(i, N) cin>>p[i];

    rep(i, N){
        if(p[i] == i+1){
            count++;
            if(i < N-1 && p[i+1] == i+2) i++;
        }
    }

    cout << count << endl;
}
