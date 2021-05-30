//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    ll A,B,C; cin>>A>>B>>C;
    ll res = 1e10;
    rep(i, 10000){
        rep(j, 10000){
            ll sum = A*i+B*j;
            if(sum > N) break;
            if((N-sum)%C != 0) continue;
            chmin(res, i+j+(N-sum)/C);
        }
    }
    cout << res << endl;
}