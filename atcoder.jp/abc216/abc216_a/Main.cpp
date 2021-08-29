#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string s; cin>>s;
    int a = s[s.size()-1]-'0';
    char b = s[0];
    cout << b;
    if(s.size() == 4){
        cout << s[1];
    }
    if(a <= 2){
        cout << '-';
    }else if(a <= 6){

    }else {
        cout << '+';
    }
    cout << endl;
}