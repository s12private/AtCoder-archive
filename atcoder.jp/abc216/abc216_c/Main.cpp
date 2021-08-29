//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;

    string ans = "";
    for(ll i=N; i>0; i /= 2){
        if(i%2 != 0){
            i--;
            ans += 'A';
        }
        ans += 'B';
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}