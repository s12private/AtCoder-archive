#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    map<char, ll> m;
    m['b'] = 1;
    m['c'] = 1;
    m['d'] = 2;
    m['w'] = 2;
    m['t'] = 3;
    m['j'] = 3;
    m['f'] = 4;
    m['q'] = 4;
    m['l'] = 5;
    m['v'] = 5;
    m['s'] = 6;
    m['x'] = 6;
    m['p'] = 7;
    m['m'] = 7;
    m['h'] = 8;
    m['k'] = 8;
    m['n'] = 9;
    m['g'] = 9;
    m['z'] = 0;
    m['r'] = 0;

    ll N; cin>>N;

    vector<string> ans;
    rep(i, N){
        string w; cin>>w;
        string s = "";
        for(char c : w){
            char a = tolower(c);
            if(m.count(a) == 0) continue;
            s += to_string(m[a]);
        }
        if(s != "") ans.push_back(s);
    }

    rep(i, ans.size()){
        cout << ans[i];
        if(i != ans.size()-1) cout << " ";
    }
    cout << endl;
}