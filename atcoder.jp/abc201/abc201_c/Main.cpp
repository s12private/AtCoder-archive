#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


string s;
bool ok(ll i){
    return s[i] == 'o' || s[i] == '?';
}

int main() {cin>>s;
    ll count = 0;
    rep(i, 10){
        if(s[i] == 'o') count++;
    }

    ll res = 0;
    rep(i, 10){
        rep(j, 10){
            rep(k, 10){
                rep(l, 10){
                    bool flag = false;
                    rep(m, 10){
                        if(s[m] == 'o'){
                            if(m != i && m != j && m != k && m != l){
                                flag = true;
                            }
                        }
                    }
                    if(!flag && ok(i) && ok(j) && ok(k) && ok(l)) res++;
                }
            }
        }
    }
    cout << res << endl;
}