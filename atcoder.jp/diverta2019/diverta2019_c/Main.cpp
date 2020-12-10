#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    ll a=0, b=0, ba=0, res = 0;
    rep(i, N){
        string s; cin>>s;
        if(s[0] == 'B'){
            if(s.back() == 'A') ba++;
            else b++;
        }else if(s.back() == 'A') a++;

        for(ll j=0; j<s.size()-1; j++){
            if(s[j] == 'A' && s[j+1] == 'B') res++;
        }
    }

    if(ba == 0){
        cout << res + min(a, b) << endl;
    }else{
        if(a == 0 && b == 0){
            cout << res + ba-1 << endl;
        }else{
            cout << res + ba + min(a, b) << endl;
        }
    }
}