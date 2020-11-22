#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    set<string> s;
    string last = "";
    rep(i, N){
        string w; cin>>w;
        if(i == 0){
            last = w;
            s.insert(w);
            continue;
        }

        if(last.back() != w[0] || s.find(w) != s.end()){
            cout << (i%2 == 0 ? "LOSE" : "WIN") << endl;
            return 0;
        }
        s.insert(w);
        last = w;
    }
    cout << "DRAW" << endl;
}