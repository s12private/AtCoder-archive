//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    string S; cin>>S;
    S = "_" + S + "_";
    ll res = (N*(N-1))/2;
    ll sum = 1;
    for(ll i=1; i<S.size(); i++){
        if(S[i-1] != S[i]){
            res -= (sum*(sum-1))/2;
            sum = 1;
            continue;
        }
        sum++;
    }
    cout << res << endl;
}