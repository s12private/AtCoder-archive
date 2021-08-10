//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, M; cin>>N>>M;
    vector<pair<ll, ll>> a(N);
    rep(i, N){
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(), a.end());

    priority_queue<ll> que;
    ll n = 0, index = 0;
    ll res = 0;
    while(n <= M){
        n++;
        while(index < N && a[index].first < n){
            que.push(a[index].second);
            index++;
        }
        if(!que.empty()){
            res += que.top();
            que.pop();
        }
    }
    cout << res << endl;
}