//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll Q; cin>>Q;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> p;
    ll sum = 0;
    rep(_, Q){
        ll P; cin>>P;
        if(P == 1){
            ll X; cin>>X;
            p.push(make_pair(X-sum, sum));
        }
        if(P == 2){
            ll X; cin>>X;
            sum += X;
        }
        if(P == 3){
            cout << p.top().first + sum << endl;
            p.pop();
        }
    }
}