#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    long N; cin>>N;
    map<long, long> map;
    rep(i, N){
        long a; cin>>a;
        map[a] = i+1;
    }

    vector<long> ans;
    for(auto v : map){
        ans.push_back(v.second);
    }

    rep(i, N){
        cout << ans[N-i-1] << endl;
    }
}
