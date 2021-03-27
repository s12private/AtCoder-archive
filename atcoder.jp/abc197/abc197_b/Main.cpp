//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H,W,X,Y; cin>>H>>W>>Y>>X;
    vector<string> S(H);
    rep(i, H) cin>>S[i];
    X--, Y--;
    ll res = 0;
    for(ll x=X+1; x<W; x++){
        //cout <<x << endl;
        //cout << S[Y][x] << endl;
        if(S[Y][x] == '.') res++;
        else break;
    }
    //cout << "a" << endl;
    for(ll x=X-1; x>=0; x--){
        if(S[Y][x] == '.') res++;
        else break;
    }
    //cout << "b" << endl;
    for(ll y=Y; y<H; y++){
        if(S[y][X] == '.') res++;
        else break;
    }
    //cout << "c" << endl;
    for(ll y=Y-1; y>=0; y--){
        if(S[y][X] == '.') res++;
        else break;
    }
    cout << res << endl;
}