//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H,W; cin>>H>>W;
    vector P(H, vector<ll>(W));
    rep(i, H) rep(j, W) cin>>P[i][j];

    ll res = 0;
    int n = H;
    for (int bit = 0; bit < (1<<n); bit++) {
        vector<ll> hL;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                hL.push_back(i);
            }
        }

        map<ll, ll> m;
        rep(w, W){
            set<ll> st;
            for(ll h : hL){
                st.insert(P[h][w]);
                if(st.size() > 1) break;
            }
            if(st.size() == 1){
                m[*st.begin()] += hL.size();
                chmax(res, m[*st.begin()]);
            }
        }

    }

    cout << res << endl;
}