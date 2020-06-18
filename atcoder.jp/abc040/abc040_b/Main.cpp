#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    long n; cin>>n;

    long long min = 1000000;
    rep(i, n){
        long a = (i+1)*(long)(n/(i+1));
        min = std::min(abs((i+1)-n/(i+1))+n-a, min);
    }

    cout << min << endl;
}
