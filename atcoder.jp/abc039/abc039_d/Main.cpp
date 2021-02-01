//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll H,W; cin>>H>>W;
    vector<vector<char>>  S(H, vector<char>(W)), res(H, vector<char>(W, '.'));
    rep(i, H){
        string s; cin>>s; 
        rep(j, W){
            S[i][j] = s[j];
        }
    }

    rep(h, H){
        rep(w, W){
            if(S[h][w] == '.') continue;
            int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
            int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};
            bool flag = false;
            for(int i=0; i<8; i++){
                ll x = dx[i]+w;
                ll y = dy[i]+h;
                if(x < 0 || y < 0 || x >= W || y >= H) continue;
                if(S[y][x] != '#'){
                    flag = true;
                }
            }
            if(!flag){
                res[h][w] = '#';
            }
        }
    }

    rep(h, H){
        rep(w, W){
            if(S[h][w] == '.') continue;
            int dx[9] = {1, 1, 1, 0, -1, -1, -1, 0, 0};
            int dy[9] = {1, 0, -1, -1, -1, 0, 1, 1, 0};
            bool flag = false;
            for(int i=0; i<9; i++){
                ll x = dx[i]+w;
                ll y = dy[i]+h;
                if(x < 0 || y < 0 || x >= W || y >= H) continue;
                if(res[y][x] == '#'){
                    flag = true;
                }
            }
            if(!flag){
                cout << "impossible" << endl;
                return 0;
            }
        }
    }

    cout << "possible" << endl;
    rep(i, H){
        rep(j, W){
            cout << res[i][j];
        }
        cout << endl;
    }
}