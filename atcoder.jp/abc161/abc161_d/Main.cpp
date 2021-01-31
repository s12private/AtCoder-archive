//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

void dfs(ll v, vector<ll> &res){
    string s = to_string(v);
    if(s.size() == 10) return;

    ll last = s.back() - '0';

    for(int i=-1; i<=1; i++){
        if(last + i < 0 || last+i > 9) continue;
        res.push_back(v*10 + last+i);
        dfs(v*10 + last+i, res);
    }
}

int main() {
    ll K; cin>>K;
    vector<ll> res;
    rep(i, 9) res.push_back(i+1);
    rep(i, 9) dfs(i+1, res);

    sort(res.begin(), res.end());
    cout << res[K-1] << endl;
}