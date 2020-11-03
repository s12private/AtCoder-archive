#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)
typedef vector<vector<bool>> Graph;

int main(){
    ll N, L; cin>>N>>L; cin.ignore();
    Graph a(L, vector<bool>(N*2-1, false));
    rep(i, L){
        string s;
        getline(cin, s);
        rep(j, s.size()){
            if(s[j] != ' ') a[i][j] = true;
        }
    }

    string str;
    getline(cin, str);
    ll x = str.find("o");
    ll y = L-1;
    while(true){
        if(x > 0 && a[y][x-1]){
            a[y][x] = false;
            x -= 1;
            continue;
        }
        if(x < N*2-2 && a[y][x+1]){
            a[y][x] = false;
            x += 1;
            continue;
        }
        if(y > 0 && a[y-1][x]){
            a[y][x] = false;
            y -= 1;
            continue;
        }
        break;
    }

    cout << x/2+1 << endl;
}