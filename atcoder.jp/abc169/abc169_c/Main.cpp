#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    long long a;
    double b;
    cin >> a >> b;
    cout << (a * (long long)(b * 100 + 0.5)) / 100 << endl;
}
