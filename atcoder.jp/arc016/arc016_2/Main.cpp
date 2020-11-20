#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<vector<char>> a(N, vector<char>(9));
    ll count = 0;
    rep(i, N) rep(j, 9){
        cin>>a[i][j];
        if(a[i][j] == 'x') count++;
        if(a[i][j] == 'o'){
            if(i == 0 || i!=0 && a[i-1][j] != 'o') count++;
        }
    }
    cout << count << endl;
}