#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll X,Y,A,B; cin>>X>>Y>>A>>B;

    ll count = 0;
    while(X < (double)Y/A && X <= (double)(B+X)/A){
        X *= A;
        count++;
    }
    count += (Y-1-X)/B;

    cout << count << endl;
}