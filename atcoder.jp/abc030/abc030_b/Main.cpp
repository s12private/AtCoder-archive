#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int n,m;
    cin>>n>>m;
    double deg = abs((n%12+m/60.0)/12.0*360 - m/60.0*360);
    deg = deg < 180 ? deg : abs(360-deg);
    cout << deg << endl;
}
