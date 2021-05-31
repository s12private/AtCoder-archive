//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,K; cin>>N>>K;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    map<ll, ll> m;
    ll res = 0;
    ll r = 0;
    ll sum = 0;
    rep(i, N){
        while(true){
            if(r < N && sum+(m[A[r]] == 0) <= K) {
                if(m[A[r]] == 0) sum++;
                m[A[r]]++;
                r++;
            }else{
                break;
            }
        }
        chmax(res, r-i);
        m[A[i]]--;
        if(m[A[i]] == 0) sum--;
    }
    cout << res << endl;
}