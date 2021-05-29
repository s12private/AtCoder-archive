//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    int n = N;
    vector<string> res;
    for (int bit = 0; bit < (1<<n); bit++) {
        ll a=0, b=0;
        bool flag = false;
        string s = "";
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                s += "(";
                a++;
            }else{
                s += ")";
                a--;
                if(a < 0){
                    flag = true;
                }
            }
        }
        if(!flag && a == b){
            res.push_back(s);
        }
    }
    sort(res.begin(), res.end());
    for(string s : res){
        cout << s << endl;
    }
}