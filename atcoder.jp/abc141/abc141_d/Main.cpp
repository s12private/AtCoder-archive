//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    priority_queue<ll> p;
    rep(i, N) {
        ll A; cin>>A;
        p.push(A);
    }

    while(M > 0){
        ll top = p.top();
        p.pop();
        p.push(top/2);
        M--;
        if(top == 0){
            cout << "0" << endl;
            return 0;
        }
    }

    ll ans = 0;
    rep(i, N){
        ans += p.top();
        p.pop();
    }

    cout << ans << endl;
}