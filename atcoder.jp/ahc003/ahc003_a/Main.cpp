//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Edge {
    long long from;
    long long to;
    long long cost;
    double calcNum = 0;
    long long num = 0;
};

using Edges = vector<Edge>;
using P = pair<long, int>;
const long long INF = 1LL << 60;

/* bellman_ford(Es,s,t,dis)
    入力: 全ての辺Es, 頂点数V, 開始点 s, 最短経路を記録するdis
    出力: 負の閉路が存在するなら ture
    計算量：O(|E||V|)
    副作用：dis が書き換えられる
*/
int num = 0;
bool bellman_ford(const Edges &Es, int V, int s, vector<long long> &dis, vector<long long> &prev) {
    dis.resize(V, INF);
    prev.resize(V, -1);
    dis[s] = 0;
    int cnt = 0;
    while (cnt < V) {
        bool end = true;
        for (auto e : Es) {
            if (dis[e.from] != INF && dis[e.from] + e.cost < dis[e.to]) {
                dis[e.to] = dis[e.from] + e.cost;
                prev[e.to] = e.from;
                end = false;
            }
        }
        if (end) break;
        cnt++;
    }
    num++;
    return (cnt == V);
}

/* get_path(prev, t)
    入力：dijkstra で得た prev, ゴール t
    出力： t への最短路のパス
*/
vector<long long> get_path(const vector<long long> &prev, int t) {
    vector<long long> path;
    for (int cur = t; cur != -1; cur = prev[cur]) {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end()); // 逆順なのでひっくり返す
    return path;
}

struct Point {
    ll x = 0;
    ll y = 0;

    Point(){}

    Point(ll y, ll x){
        this->x = x;
        this->y = y;
    }

    ll index(){
        return y*30+x;
    }
};

string dire(int y, int x){
    if(x == 0 && y == 1) return "D";
    if(x == 0 && y == -1) return "U";
    if(x == 1 && y == 0) return "R";
    if(x == -1 && y == 0) return "L";
}

ll p2i(Point p){
    return p.y*30+p.x;
}
ll p2i(ll y, ll x){
    return y*30+x;
}
Point i2p(ll index){
    return Point(index/30, index%30);
}

Edges edges;

string query(Point s, Point t){
    vector<long long> dis, prev;
    bellman_ford(edges, 30*30, p2i(s.y, s.x), dis, prev);
    vector<ll> p = get_path(prev, p2i(t.y, t.x));

    Point from = s;
    ll distance = dis[p2i(t.y, t.x)];
    ll ave = distance/p.size();
    string path = "";
    for(ll i=1; i<p.size(); i++){
        Point to = i2p(p[i]);
        path += dire(to.y-from.y, to.x-from.x);
        from = to;
    }
    return path;
}

void shuffleM( int* array, int* array2) {
    for (int i = 0; i < 4; i++) {
        int r = random()%4;
        int tmp = array[i];
        array[i] = array[r];
        array[r] = tmp;
        int tmp2 = array2[i];
        array2[i] = array2[r];
        array2[r] = tmp2;
    }
}

string query2(Point s, Point t){
    vector<vector<ll>> reached(30, vector<ll>(30));
    vector<vector<string>> paths(30, vector<string>(30));
    deque<Point> st;
    st.push_back(s);
    while(!st.empty()){
        Point now = st.front();
        if(now.y == t.y && now.x == t.x) break;
        st.pop_front();
        int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
        //shuffleM(dx, dy);
        rep(i, 4){
            ll x = now.x + dx[i], y = now.y + dy[i];
            if(x < 0 || x >= 30 || y < 0 || y >= 30 || reached[y][x]) continue;
            st.push_back(Point(y, x));
            reached[y][x] = true;
            paths[y][x] = paths[now.y][now.x]+dire(dy[i], dx[i]);
        }
    }
    return paths[t.y][t.x];
}

string query3(Point s, Point t){
    vector<vector<ll>> reached(30, vector<ll>(30));
    vector<vector<string>> paths(30, vector<string>(30));
    deque<Point> st;
    st.push_back(s);
    while(!st.empty()){
        Point now = st.front();
        if(now.y == t.y && now.x == t.x) break;
        st.pop_front();
        int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
        //shuffleM(dx, dy);
        rep(i, 4){
            ll x = now.x + dx[i], y = now.y + dy[i];
            if(x < 0 || x >= 30 || y < 0 || y >= 30 || reached[y][x]) continue;
            st.push_front(Point(y, x));
            reached[y][x] = true;
            paths[y][x] = paths[now.y][now.x]+dire(dy[i], dx[i]);
        }
    }
    return paths[t.y][t.x];
}

bool LOCAL_TEST = false;

int main(){
    vector<vector<ll>> h(30, vector<ll>(29));
    vector<vector<ll>> v(29, vector<ll>(30));
    if(LOCAL_TEST){
        rep(i, 30) rep(j, 29) cin>>h[i][j];
        rep(i, 29) rep(j, 30) cin>>v[i][j];
    }

    int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
    rep(i, 30){
        rep(j, 30){
            rep(k, 4) {
                ll x = j + dx[k], y = i + dy[k];
                if (x < 0 || x >= 30 || y < 0 || y >= 30) continue;
                ll cost = 1e9;
                /*
                if(LOCAL_TEST) {
                    if (dx[k] == 0 && dy[k] == 1) cost = v[y - 1][x];
                    if (dx[k] == 0 && dy[k] == -1) cost = v[y][x];
                    if (dx[k] == 1 && dy[k] == 0) cost = h[y][x - 1];
                    if (dx[k] == -1 && dy[k] == 0) cost = h[y][x];
                }
                */
                Edge edge;edge.cost = cost; edge.to = p2i(y, x); edge.from = p2i(i, j);
                edges.push_back(edge);
            }
        }
    }

    ll prev_result = 0, a;
    double e;
    double score = 0.0;
    Point s,t;
    for(ll k=0; k<1000; k++){
        if(LOCAL_TEST) cin>>s.y>>s.x>>t.y>>t.x>>a>>e;
        else cin>>s.y>>s.x>>t.y>>t.x;

        string path;
        if(k < 250) path = query2(s, t);
        else path = query(s, t);
        cout << path << endl;
        cout << flush;

        if(LOCAL_TEST){
            ll sum = 0;
            Point now = s;
            for(char c : path){
                Point next = now;
                if(c == 'D') next.y++, sum += v[next.y-1][next.x];
                if(c == 'U') next.y--, sum += v[next.y][next.x];
                if(c == 'R') next.x++, sum += h[next.y][next.x-1];
                if(c == 'L') next.x--, sum += h[next.y][next.x];
                now = next;
            }
            score = score * 0.998 + (double)a/sum;
            prev_result = round(sum*e);
        }else{
            cin>>prev_result;
        }

        Point now = s;
        map<pair<ll, ll>, bool> m;
        for(char c : path){
            Point next = now;
            if(c == 'D') next.y++;
            if(c == 'U') next.y--;
            if(c == 'R') next.x++;
            if(c == 'L') next.x--;
            m[make_pair(now.index(), next.index())] = true;
            now = next;
        }
        for(Edge &edge : edges){
            if(m[make_pair(edge.from, edge.to)]){
                edge.cost = ((edge.cost*edge.calcNum) + prev_result/path.size() * 1.0/path.size())/(edge.calcNum+1.0/path.size());
                edge.calcNum+=1.0/path.size();
            }else{
                if(edge.calcNum <= 0.0000001) {
                    edge.cost = (edge.cost * edge.num + prev_result) / (edge.num + path.size());
                    edge.num += path.size();
                }
            }
        }
    }
    if(LOCAL_TEST){
        cout << (ll)round(2312311 * score) << endl;
    }
}