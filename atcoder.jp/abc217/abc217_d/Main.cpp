//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    map<ll, ll> a;
    ll L, Q; cin>>L>>Q;

    a[0]++;
    a[L]++;

    rep(i, Q){
        ll c, x; cin>>c>>x;

        if(c == 1){
            a[x]++;
        }else{
            //auto itr = lower_bound(a.begin(), a.end(), x);
            auto itr = a.lower_bound(x);
            auto itr2 = itr--;

            cout << itr2->first - itr->first << endl;
        }
    }
}