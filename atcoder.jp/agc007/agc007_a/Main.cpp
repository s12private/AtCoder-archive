#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll H, W; cin>>H>>W;
    vector<vector<char>> A(H, vector<char>(W));
    ll sum = 0;
    rep(i, H) rep(j, W){
        cin>>A[i][j];
        if(A[i][j] == '#') sum++;
    }

    if(sum > H+W-1){
        cout << "Impossible" << endl;
        return 0;
    }

    stack<pair<ll, ll>> s;
    s.push(pair<ll, ll>(0, 0));
    while(!s.empty()) {
       pair<ll, ll> target = s.top();
       s.pop();
       A[target.first][target.second] = '.';
       if(target.first == H-1 && target.second == W-1) break;
       pair<ll, ll> next(target.first, target.second);
       if (target.first + 1 < H) {
           if (A[next.first+1][next.second] == '#') s.push(pair<ll, ll>(next.first+1, next.second));
       }
       if (target.second + 1 < W) {
           if (A[next.first][next.second+1] == '#') s.push(pair<ll, ll>(next.first, next.second+1));
       }
    }

    rep(i, H) rep(j, W){
        if(A[i][j] == '#'){
            cout << "Impossible" << endl;
            return 0;
        }
    }

    cout << "Possible" << endl;
}