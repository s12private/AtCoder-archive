//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <time.h>
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Point {
    ll x = 0;
    ll y = 0;

    Point(){}

    Point(ll x, ll y){
        this->x = x;
        this->y = y;
    }
};

void setSame(vector<vector<bool>>& reached, ll x, ll y, vector<vector<ll>>& t){
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    rep(i, 4){
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(t[y][x] == t[y+dy[i]][x+dx[i]]) reached[y+dy[i]][x+dx[i]] = true;
    }
}

ll mx = -1;
string resStr = "";

void dfs1(ll x, ll y, ll score, string res, vector<vector<bool>>& reached, vector<vector<ll>>& t, vector<vector<ll>>& p){
    reached[y][x] = true;
    setSame(reached, x, y, t);

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int n =0;

    vector<pair<ll, ll>> pa(4);
    rep(i, 4){
        pa[i].first = 0;
        pa[i].second = i;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        pa[i].first = p[y+dy[i]][x+dx[i]];
    }
    //sort(pa.rbegin(), pa.rend());
    rep(j, 4){
        ll i = pa[j].second;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        n++;
        string next = "";
        if(dx[i] == 1 && dy[i] == 0) next = "R";
        if(dx[i] == -1 && dy[i] == 0) next = "L";
        if(dx[i] == 0 && dy[i] == 1) next = "D";
        if(dx[i] == 0 && dy[i] == -1) next = "U";
        dfs1(x+dx[i], y+dy[i], score+p[y+dy[i]][x+dx[i]], res+next, reached, t, p);
    }
    if(score > mx){
        mx = score;
        resStr = res;
    }
}
void dfs2(ll x, ll y, ll score, string res, vector<vector<bool>>& reached, vector<vector<ll>>& t, vector<vector<ll>>& p){
    reached[y][x] = true;
    setSame(reached, x, y, t);

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int n =0;

    vector<pair<ll, ll>> pa(4);
    rep(i, 4){
        pa[i].first = 0;
        pa[i].second = i;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        pa[i].first = p[y+dy[i]][x+dx[i]];
    }
    sort(pa.rbegin(), pa.rend());
    rep(j, 4){
        ll i = pa[j].second;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        n++;
        string next = "";
        if(dx[i] == 1 && dy[i] == 0) next = "R";
        if(dx[i] == -1 && dy[i] == 0) next = "L";
        if(dx[i] == 0 && dy[i] == 1) next = "D";
        if(dx[i] == 0 && dy[i] == -1) next = "U";
        dfs2(x+dx[i], y+dy[i], score+p[y+dy[i]][x+dx[i]], res+next, reached, t, p);
    }
    if(score > mx){
        mx = score;
        resStr = res;
    }
}
void dfs3(ll x, ll y, ll score, string res, vector<vector<bool>>& reached, vector<vector<ll>>& t, vector<vector<ll>>& p){
    reached[y][x] = true;
    setSame(reached, x, y, t);

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int n =0;

    vector<pair<ll, ll>> pa(4);
    rep(i, 4){
        pa[i].first = 0;
        pa[i].second = i;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        pa[i].first = p[y+dy[i]][x+dx[i]];
    }
    sort(pa.begin(), pa.end());
    rep(j, 4){
        ll i = pa[j].second;
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        n++;
        string next = "";
        if(dx[i] == 1 && dy[i] == 0) next = "R";
        if(dx[i] == -1 && dy[i] == 0) next = "L";
        if(dx[i] == 0 && dy[i] == 1) next = "D";
        if(dx[i] == 0 && dy[i] == -1) next = "U";
        dfs3(x+dx[i], y+dy[i], score+p[y+dy[i]][x+dx[i]], res+next, reached, t, p);
    }
    if(score > mx){
        mx = score;
        resStr = res;
    }
}

uint64_t get_rand_range( uint64_t min_val, uint64_t max_val ) {
    // 乱数生成器
    static std::mt19937_64 mt64(0);

    // [min_val, max_val] の一様分布整数 (int) の分布生成器
    std::uniform_int_distribution<uint64_t> get_rand_uni_int( min_val, max_val );

    // 乱数を生成
    return get_rand_uni_int(mt64);
}

void dfs4(ll x, ll y, ll score, string res, vector<vector<bool>>& reached, vector<vector<ll>>& t, vector<vector<ll>>& p){
    reached[y][x] = true;
    setSame(reached, x, y, t);

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int n =0;

    vector<int> sh = {0,1,2,3};
    mt19937_64 get_rand_mt;
    shuffle(sh.begin(), sh.end(), get_rand_mt);
    rep(j, 4){
        ll i = sh[j];
        if(x+dx[i] < 0 || x+dx[i] > 49 || y+dy[i] < 0 || y+dy[i] > 49) continue;
        if(reached[y+dy[i]][x+dx[i]]) continue;
        n++;
        string next = "";
        if(dx[i] == 1 && dy[i] == 0) next = "R";
        if(dx[i] == -1 && dy[i] == 0) next = "L";
        if(dx[i] == 0 && dy[i] == 1) next = "D";
        if(dx[i] == 0 && dy[i] == -1) next = "U";
        dfs4(x+dx[i], y+dy[i], score+p[y+dy[i]][x+dx[i]], res+next, reached, t, p);
    }
    if(score > mx){
        mx = score;
        resStr = res;
    }
}

int main() {
    clock_t start = clock();
    Point s; cin>>s.y>>s.x;
    vector<vector<ll>> t(50, vector<ll>(50)), p(50, vector<ll>(50));

    rep(i, 50) rep(j, 50) cin>>t[i][j];
    rep(i, 50) rep(j, 50) cin>>p[i][j];

    vector<vector<bool>> reached1(50, vector<bool>(50));
    dfs1(s.x, s.y, 0,"", reached1, t, p);
    vector<vector<bool>> reached2(50, vector<bool>(50));
    dfs2(s.x, s.y, 0,"", reached2, t, p);
    vector<vector<bool>> reached3(50, vector<bool>(50));
    dfs3(s.x, s.y, 0,"", reached3, t, p);

    clock_t end = clock();
    ll num = 0;
    while(static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0 < 1910){
        vector<vector<bool>> reached(50, vector<bool>(50));
        dfs4(s.x, s.y, 0,"", reached, t, p);
        end = clock();
        num++;
    }
    cout << resStr << endl;
}