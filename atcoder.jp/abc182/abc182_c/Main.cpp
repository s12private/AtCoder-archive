#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll a; cin>>a;
    string s = to_string(a);
    ll sum = 0;

    if(a%3 == 0){
        cout << 0 << endl;
        return 0;
    }

    rep(i, s.size()){
        sum += s[i] - '0';
    }

    ll n = s.size();
    ll ans = n;
    for (ll bit = 0; bit < (1<<n); ++bit) {
        ll ss = sum;
        ll count = 0;
        for (ll i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                ss -= s[i]-'0';
                count++;
            }
        }
        if(ss != 0 && ss%3 == 0 && count != n){
            ans = min(ans, count);
        }
    }
    cout << (ans == n ? -1 : ans) << endl;
}