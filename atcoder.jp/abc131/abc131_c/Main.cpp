#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;

ll lcm(ll A, ll B){
    return (A*B)/__gcd(A, B);
}

int main() {
    ll A,B,C,D;
    cin>>A>>B>>C>>D;

    ll e = B/C + B/D - B/lcm(C, D);
    //cout << e << endl;
    e -= (A-1)/C + (A-1)/D - (A-1)/lcm(C, D);
    //cout << (A-1)/C + (A-1)/D - (A-1)/lcm(C, D) << endl;

    cout << B-A-e+1 << endl;
}
