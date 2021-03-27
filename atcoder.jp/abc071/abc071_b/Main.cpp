#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    map<char, bool> m;
    for(char c : S){
        m[c] = true;
    }

    for(char i = 'a'; i<='z'; i++){
        if(!m[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}