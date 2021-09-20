//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll Q; cin>>Q;
    queue<ll> a;
    priority_queue<ll, vector<ll>, greater<ll>> b;
    rep(_, Q){
        ll q; cin>>q;
        if(q == 1){
            ll x; cin>>x;
            a.push(x);
        }
        if(q == 2){
            if(b.empty()){
                cout << a.front() << endl;
                a.pop();
            }else{
                cout << b.top() << endl;
                b.pop();
            }
        }
        if(q == 3){
            while(!a.empty()){
                b.push(a.front());
                a.pop();
            }
        }
    }
}