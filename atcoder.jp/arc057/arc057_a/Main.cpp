#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll A, K; cin>>A>>K;

    if(K == 0){
         cout << fixed << 2000000000000-A << endl;
         return 0;
    }

    ll count = 0;
    while(A < 2e12){
        count++;
        A += 1+K*A;
    }

    cout << count << endl;
}