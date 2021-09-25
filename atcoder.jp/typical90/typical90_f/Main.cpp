//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K; cin>>N>>K;
    string S; cin>>S;
    vector count = vector<vector<ll>>(N+1, vector<ll>(26, N));
    for(ll i=N-1; i>=0; i--) {
        rep(j, 26){
            if(j == S[i]-'a'){
                count[i][j] = i;
            }else{
                count[i][j] = count[i+1][j];
            }
        }
    }

    string res = "";
    ll index = 0;
    while(res.size() != K){
        rep(i, 26){
            ll rem = N-count[index][i]-1;
            if(rem >= K-(ll)res.size()-1) {
                res += (char)(i+'a');
                index = count[index][i]+1;
                break;
            }
        }
    }
    cout << res << endl;
}