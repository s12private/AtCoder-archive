#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N, M; cin>>N>>M;
    vector<ll> a(N), b(M);
    rep(i, N) cin>>a[i];
    rep(i, M) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    queue<ll> A, B;
    rep(i, N){
        A.push(a[i]);
    }
    rep(i, M){
        B.push(b[i]);
    }

    while(!(A.empty() || B.empty())){
        if(A.front() >= B.front()){
            A.pop();
            B.pop();
        }else{
            A.pop();
        }
    }

    if(B.empty()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}