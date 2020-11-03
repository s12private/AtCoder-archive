#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll K, A, B; cin>>K>>A>>B;
    ll b = 1, m = 0;

    if(B-A <= 1){
        cout << K+1 << endl;
        return 0;
    }
    while(K > 0){
        //cout << b << " " << m << endl;
        if(m > 0){
            b += B;
            m--;
            K--;
            continue;
        }

        if(b < A){
            b++;
            K--;
            continue;
        }

        b -= A;
        m++;
        K--;
    }

    if(m > 0){
        b+=A+1;
    }
    cout << b << endl;
}