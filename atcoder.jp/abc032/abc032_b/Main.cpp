#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string s;
    int k;
    cin>>s>>k;
    set<string> set;
    FOR(i, k-1, s.size()){
        set.insert(s.substr(i-k+1, k));
    }

    cout << set.size() << endl;
}
