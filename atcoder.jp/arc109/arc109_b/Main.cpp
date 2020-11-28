#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin>>n;
    ll count = 0;
    ll sum = 0;
    for(ll i=1; i<n+1; i++){
        sum += i;
        if(sum > n+1) break;
        count++;
    }
    cout << n-count+1 << endl;
}