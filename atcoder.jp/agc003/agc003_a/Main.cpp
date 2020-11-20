#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string s; cin>>s;
    set<char> ss;
    rep(i, s.size()) ss.insert(s[i]);
    ll x=0, y=0;
    for(char c : ss){
        if(c == 'N') x++;
        if(c == 'S') x--;
        if(c == 'W') y--;
        if(c == 'E') y++;
    }
    cout << (!x && !y ? "Yes" : "No") << endl;
}