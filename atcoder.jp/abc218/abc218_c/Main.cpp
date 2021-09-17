//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
struct Point {
    ll y = 0;
    ll x = 0;

    Point(){}

    Point(ll y, ll x){
        this->y = y;
        this->x = x;
    }
};

vector<string> sq(ll N, vector<string> S) {
    vector<string> s;
    Point mn(0, 0), mx(N-1, N-1);
    rep(i, N){
        bool flag = false;
        rep(j, N){
            if(S[i][j] == '#') flag = true;
        }
        mn.y = i;
        if(flag) break;
    }
    rep(i, N){
        bool flag = false;
        rep(j, N){
            if(S[N-i-1][j] == '#') flag = true;
        }
        mx.y = N-i-1;
        if(flag) break;
    }

    rep(i, N){
        bool flag = false;
        rep(j, N){
            if(S[j][i] == '#') flag = true;
        }
        mn.x = i;
        if(flag) break;
    }
    rep(i, N){
        bool flag = false;
        rep(j, N){
            if(S[j][N-i-1] == '#') flag = true;
        }
        mx.x = N-i-1;
        if(flag) break;
    }
    for(ll i=mn.y; i<=mx.y; i++){
        string a = "";
        for(ll j=mn.x; j<=mx.x; j++){
            a.push_back(S[i][j]);
        }
        s.push_back(a);
    }
    return s;
}

bool same(vector<string> a, vector<string> b){
    if(a.size() != b.size() || a[0].size() != b[0].size()) return false;

    bool same = true;
    rep(i, a.size()){
        rep(j, a[0].size()){
            if(a[i][j] != b[i][j]) same = false;
        }
    }
    return same;
}
bool same(vector<string> a, vector<vector<char>> b){
    if(a.size() != b.size() || a[0].size() != b[0].size()) return false;

    bool same = true;
    rep(i, a.size()){
        rep(j, a[0].size()){
            if(a[i][j] != b[i][j]) same = false;
        }
    }
    return same;
}

int main() {
    ll N; cin>>N;
    vector<string> S(N), T(N), s, t;
    rep(i, N) cin>>S[i];
    rep(i, N) cin>>T[i];
    s = sq(N, S);
    t = sq(N, T);

    bool res = same(s, t);
    vector<vector<char>> ut(t.size(), vector<char>(t[0].size()));
    rep(i, ut.size()) {
        rep(j, ut[0].size()) {
            ut[i][j] = t[i][j];
        }
    }
    rep(_, 3){
        vector<vector<char>> u(ut[0].size(), vector<char>(ut.size()));
        rep(i, u.size()) {
            rep(j, u[0].size()) {
                u[i][j] = ut[ut.size()-j-1][i];
            }
        }
        if(same(s, u)) res = true;
        ut = vector<vector<char>>(ut[0].size(), vector<char>(ut.size()));
        rep(i, ut.size()) {
            rep(j, ut[0].size()) {
                ut[i][j] = u[i][j];
            }
        }
    }

    if(res){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}