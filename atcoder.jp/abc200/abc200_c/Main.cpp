#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    map<ll, ll> m;
    vector<ll> a(N);
    rep(i, N){
        ll A; cin>>A;
        m[A%200]++;
        a[i] = A;
    }

    ll res = 0;
    rep(i, 200){
        rep(j, 200){
            if((i-j)%200 == 0){
                if(m[i] == 0 || m[j] == 0) continue;
                res += (m[j]*(m[j]-1))/2;
            }
        }
    }
    cout << res << endl;
}