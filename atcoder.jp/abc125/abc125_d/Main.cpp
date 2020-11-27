#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    ll sum = 0;
    ll p = 0;
    ll mn = 10e9;
    rep(i, N){
        ll A; cin>>A;
        if(A < 0){
            p++;
            A = -A;
        }
        sum += A;
        mn = min(A, mn);
    }
    cout << sum - mn*(2*(p%2)) << endl;
}