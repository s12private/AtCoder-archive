//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    set<ll> s;
    rep(i, 2e5+2) s.insert(i);

    rep(i, N){
        ll p; cin>>p;
        if(s.count(p) != 0)
            s.erase(p);
        for(auto a : s){
            cout << a << endl;
            break;
        }
    }
}