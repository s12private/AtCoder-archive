#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> a(M, 0);
    rep(i, N){
        int K;
        cin>>K;
        rep(j, K){
            int A;
            cin>>A;
            a[A-1]++;
        }
    }

    int count = 0;
    rep(i, M){
        if(a[i] == N) count++;
    }

    cout << count << endl;
}
