#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string s; cin>>s;

    for(ll i=0; i<s.size()-2; i++){
        if(s.size() < 3) break;
        string str = s.substr(i, 3);
        if(str == "fox"){
            s.replace(i, 3, "");
            i = i-2 >= 0 ? i-2 : i-1 >=0 ? i-1 : 0;
            i--;
        }
    }

    cout << s.size() << endl;
}