#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string N; cin>>N;

    reverse(N.begin(), N.end());

    bool flag = false;
    ll index = -1;
    rep(i, N.size()){
        if(N[i] == '0' && !flag) continue;
        else{
            flag = true;
            index = i;
            break;
        }
    }

    if(stol(N) == 0){
        cout << "Yes" << endl;
        return 0;
    }

    if(index == -1){
        cout << "No" << endl;
        return 0;
    }

    flag = false;

    N = N.substr(index);
    for(ll i=0; i<N.size()/2; i++){
        if(N[i] != N[N.size()-i-1]) flag = true;
    }

    if(flag){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}