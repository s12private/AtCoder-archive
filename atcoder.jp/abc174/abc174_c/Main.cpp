#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)


int main() {
    ll K; cin>>K;

    ll x = 7%K;
    set<ll> s;
    ll i = 1;
    while(s.count(x) == 0){
        if(x == 0){
            cout << i << endl;
            return 0;
        }
        s.insert(x);
        x = (x*10+7)%K;
        i++;
    }
    cout << -1 << endl;
}