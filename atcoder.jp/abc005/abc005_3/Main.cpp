#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll T, N; cin>>T>>N;
    queue<ll> A, B;
    rep(i, N) {
        ll a; cin>>a;
        A.push(a);
    }
    ll M; cin>>M;
    rep(i, M) {
        ll b; cin>>b;
        B.push(b);
    }

    while(!A.empty() && !B.empty()){
        if(A.front() <= B.front() && A.front()+T >= B.front()){
            A.pop();
            B.pop();
        }else{
            A.pop();
        }
    }

    cout << (B.empty() ? "yes" : "no") << endl;
}