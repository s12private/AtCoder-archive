//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

string X;
map<char, ll> m;

bool compare(string a, string b) {
    ll L = min(a.size(), b.size());
    rep(i, L){
        if(a[i] != b[i]){
            if(m[a[i]] < m[b[i]]){
                return true;
            }else {
                return false;
            }
        }
    }
    if(a.size() < b.size()){
        return true;
    }else {
        return false;
    }
}

int main() {
    cin>>X;
    ll N; cin>>N;
    rep(i, X.size()){
        m[X[i]] = i;
    }
    vector<string> S(N);
    rep(i, N) cin>>S[i];

    sort(S.begin(), S.end(), compare);
    for(string a : S){
        cout << a << endl;
    }
}