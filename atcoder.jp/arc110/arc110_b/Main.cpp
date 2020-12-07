#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string T; cin>>T;

    string r = "";
    for(ll i=0; i<N+1; i++){
        r += "110";
    }

    if(r.find(T) == string::npos){
        cout << 0 << endl;
        return 0;
    }

    if(T == "1"){
        ll a = 1e10;
        cout << 2*a << endl;
        return 0;
    }
    if(T == "11" || T == "10" || T == "0"){
        ll a = 1e10;
        cout << a << endl;
        return 0;
    }

    if(T == "01"){
        ll a = 1e10;
        cout << a-1 << endl;
        return 0;
    }

    ll cnt = 1e10 - count(T.cbegin(), T.cend(), '0');

    cnt += T.back() == '0' ? 1 : 0;
    cout << cnt << endl;
}