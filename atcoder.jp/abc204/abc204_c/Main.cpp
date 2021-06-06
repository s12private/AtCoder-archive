//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,M;cin>>N>>M;
    vector<vector<ll>> v(N);
    rep(i, M){
        ll A,B;cin>>A>>B;
        A--, B--;
        v[A].push_back(B);
    }

    ll res = 0;
    rep(i, N){
        vector<bool> reached(N);
        queue<ll> que;
        que.push(i);
        reached[i] = true;
        while(!que.empty()){
            ll top = que.front();
            que.pop();
            for(ll a : v[top]){
                if(reached[a]) continue;
                res++;
                que.push(a);
                reached[a] = true;
            }
        }
    }
    cout << res+N << endl;
}