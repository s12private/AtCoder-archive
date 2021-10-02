//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    map<ll, ll> m;
    rep(i, N) {
        ll A, B; cin>>A>>B;
        m[A]++;
        m[A+B]--;
    }

    vector<ll> res(N+1);
    ll before = 0;
    ll bP = 0;
    for(auto p : m) {
        m[p.first] += before;
        res[before] += p.first-bP;
        before = m[p.first];
        bP = p.first;
    }

    rep(i, N){
        cout << res[i+1];
        if(i < N-1) cout << " ";
    }
    cout << endl;
}