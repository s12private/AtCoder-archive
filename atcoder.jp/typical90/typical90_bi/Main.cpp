//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll Q; cin>>Q;
    deque<ll> deq;
    rep(i, Q){
        ll t,x; cin>>t>>x;
        if(t == 1){
            deq.push_front(x);
        }else if(t == 2){
            deq.push_back(x);
        }else{
            cout << deq.at(x-1) << endl;
        }
    }
}