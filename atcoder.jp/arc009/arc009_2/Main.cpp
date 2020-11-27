#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    vector<char> b(10);
    rep(i, 10) {
        ll bb; cin>>bb;
        b[bb] = i+'0';
    }
    ll N; cin>>N;
    vector<pair<ll, string>> a;
    rep(i, N){
        string str; cin>>str;
        string str2;
        rep(j, str.size()){
            str2 += b[str[j]-'0'];
        }

        a.push_back(make_pair(stoll(str2), str));
    }
    sort(a.begin(), a.end());

    rep(i, N){
        cout << a[i].second << endl;
    }
}