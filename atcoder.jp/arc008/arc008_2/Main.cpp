#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M; cin>>N>>M;
    map<char, ll> name, kit;
    string a,b; cin>>a>>b;
    for(char c : a) name[c]++;
    for(char c : b) kit[c]++;

    ll mx = 0;
    for(auto v: name){
        if(kit[v.first] == 0){
            cout << "-1" << endl;
            return 0;
        }

        mx = max(mx, (ll)ceil((double)v.second/kit[v.first]));
    }

    cout << mx << endl;
}