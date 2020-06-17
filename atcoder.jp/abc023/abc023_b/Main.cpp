#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int N;
    string s;
    cin>>N>>s;

    string ac = "b";
    int i=0;
    while(ac.size() < s.size()){
        i++;
        if(i%3 == 0) ac = "b" + ac + "b";
        else if(i%3 == 1) ac = "a" + ac + "c";
        else ac = "c" + ac + "a";
    }

    if(ac == s) cout << i << endl;
    else cout << -1 << endl;
}
