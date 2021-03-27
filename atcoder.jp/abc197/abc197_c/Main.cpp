//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    int n = N-1;
    ll res = -1;
    for (int bit = 0; bit < (1<<n); ++bit) {
        ll xxor = 0;
        queue<ll> oor;
        oor.push(A[0]);
        for (int ii = 0; ii < n; ++ii) {
            if (bit & (1 << ii)) {
                ll o = 0;
                while(!oor.empty()){
                    o |= oor.front();
                    oor.pop();
                }
                xxor ^= o;
            }
            oor.push(A[ii+1]);
        }
        ll o = 0;
        while(!oor.empty()){
            o |= oor.front();
            oor.pop();
        }
        xxor ^= o;
        if(res == -1) res = xxor;
        else chmin(res, xxor);
    }
    cout << res << endl;
}