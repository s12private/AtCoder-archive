#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N; cin>>N;

    vector<ll> a(N);
    map<ll, ll> m;
    rep(i, N){
        cin>>a[i];
        m[a[i]]++;
    }

    ll res = a[0];
    for(ll i=1; i<N; i++){
        res ^= a[i];
    }

    if(m.size() == 3){
        bool flag = false;
        for(auto p : m){
            if(p.second*3 != N) flag = true;
        }
        if(!flag && res == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else if(m.size() == 2){
        bool flag = false;
        if(m.count(0) == 0) flag = true;
        for(auto p : m){
            if(p.first == 0 && p.second*3 != N){
                flag = true;
            }
            if(p.first != 0 && p.second*3 != 2*N){
                flag = true;
            }
        }
        if(res == 0 && !flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else if(m.size() == 1){
        if(m.count(0) == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        cout << "No" << endl;
    }
}