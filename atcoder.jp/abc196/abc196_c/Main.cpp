//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    ll res = 0;
    /*
    for(ll i=2; i<=to_string(N).size()-2; i+=2){
        res += pow(10, i/2)-1;
        cout << pow(10, i/2)-1 << endl;
    }

    if(to_string(N).size()%2 == 1){
        cout << res << endl;
        return 0;
    }
     */

    if(N < 10) {
        cout << 0 << endl;
        return 0;
    }

    if(to_string(N).size()%2 != 0){
        N = pow(10, to_string(N).size()-1)-1;
    }

    string a = "0", b="0";
    rep(i, to_string(N).size()){
        if(i < to_string(N).size()/2){
            a += to_string(N)[i];
        }else{
            b += to_string(N)[i];
        }
    }
    ll c = stoll(a);
    ll d = stoll(b);
    res = c;
    if(c > d){
        res--;
    }
    cout << res << endl;
}