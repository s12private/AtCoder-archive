#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> b(N);
    rep(i, N) cin>>b[i];

    vector<ll> ans;
    while(b.size() != 0){
        bool flag = false;
        for(ll i=b.size()-1; i>=0; i--){
            if(b[i] == i+1){
                ans.push_back(b[i]);
                b.erase(b.begin() + i);
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "-1" << endl;
            return 0;
        }
    }

    reverse(ans.begin(), ans.end());
    rep(i, N){
        cout << ans[i] << endl;
    }
}