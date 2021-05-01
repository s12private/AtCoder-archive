//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    deque<char> c;

    ll i = 0;
    ll swap = 0;
    while(i < S.size()) {
        if (S[i] == 'R') swap++;
        else {
            if(swap%2 == 0 && !c.empty() && S[i] == c.back()) {
                c.pop_back();
            }else if(swap%2 == 1 && !c.empty() && S[i] == c.front()) {
                c.pop_front();
            } else {
                if(swap%2 == 0)
                    c.push_back(S[i]);
                else
                    c.push_front(S[i]);
            }
        }
        i++;
    }

    if(swap%2 == 1) reverse(c.begin(), c.end());

    rep(i, c.size()){
        if(i < c.size()-1){
            if(c[i] == c[i+1]){
                i++;
                continue;
            }
        }
        cout << c[i];
    }
    cout << endl;
}