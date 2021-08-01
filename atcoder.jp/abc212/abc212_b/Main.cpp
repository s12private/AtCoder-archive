#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string s; cin>>s;
    bool weak = false;
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]){
        weak = true;
    }

    vector<ll> a(4);
    rep(i, 4){
        a[i] = s[i]-'0';
    }

    if((a[0]+1)%10 == a[1] && (a[1]+1)%10 == a[2] && (a[2]+1)%10 == a[3]){
        weak = true;
    }

    cout << (weak ? "Weak" : "Strong") << endl;
}