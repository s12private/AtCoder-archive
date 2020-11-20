#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll m; cin>>m;

    string ans;
    if(m < 100){
        ans = "00";
    }else if(m <= 5000){
        if(m < 1000) ans = "0" + to_string(m/100);
        else ans = to_string(m/100);
    }else if(m <= 30000){
        ans = to_string(m/1000 + 50);
    }else if(m <= 70000){
        ans = to_string((m/1000 - 30)/5+80);
    }else{
        ans = "89";
    }
    cout << ans << endl;
}