//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

class UnionFind{
public:
    vector<ll> parent; //parent[i]はiの親
    vector<ll> siz; //素集合のサイズを表す配列(1で初期化)
    map<ll,vector<ll>> group; //集合ごとに管理する(key:集合の代表元、value:集合の要素の配列)
    ll n; //要素数

    //コンストラクタ
    UnionFind(ll n_):n(n_),parent(n_),siz(n_,1){
        //全ての要素の根が自身であるとして初期化
        for(ll i=0;i<n;i++){parent[i]=i;}
    }

    //データxの属する木の根を取得(経路圧縮も行う)
    ll root(ll x){
        if(parent[x]==x) return x;
        return parent[x]=root(parent[x]);//代入式の値は代入した変数の値なので、経路圧縮できる
    }

    //xとyの木を併合
    void unite(ll x,ll y){
        ll rx=root(x);//xの根
        ll ry=root(y);//yの根
        if(rx==ry) return;//同じ木にある時
        //小さい集合を大きい集合へと併合(ry→rxへ併合)
        if(siz[rx]<siz[ry]) swap(rx,ry);
        siz[rx]+=siz[ry];
        parent[ry]=rx;//xとyが同じ木にない時はyの根ryをxの根rxにつける
    }

    //xとyが属する木が同じかを判定
    bool same(ll x,ll y){
        ll rx=root(x);
        ll ry=root(y);
        return rx==ry;
    }

    //xの素集合のサイズを取得
    ll size(ll x){
        return siz[root(x)];
    }

    //素集合をそれぞれグループ化
    void grouping(){
        //経路圧縮を先に行う
        rep(i,n)root(i);
        //mapで管理する(デフォルト構築を利用)
        rep(i,n)group[parent[i]].push_back(i);
    }

    //素集合系を削除して初期化
    void clear(){
        rep(i,n){parent[i]=i;}
        siz=vector<ll>(n,1);
        group.clear();
    }
};

ll H,W;
ll p2i(ll y, ll x){
    return y*W+x;
}

int main() {
    cin>>H>>W;
    ll Q; cin>>Q;

    UnionFind uf(H*W);
    vector<vector<bool>> isRed(H, vector<bool>(W));
    rep(i, Q){
        ll t; cin>>t;
        if(t == 1){
            ll r, c; cin>>r>>c;
            r--, c--;
            isRed[r][c] = true;
            int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};
            rep(j, 4){
                ll x = c+dx[j], y=r+dy[j];
                if(x < 0 || x >= W || y < 0 || y >= H) continue;
                if(isRed[y][x])
                    uf.unite(p2i(r, c), p2i(y, x));
                //cout << p2i(r, c) << "," << p2i(y, x) << endl;
            }
        }else{
            ll y1, x1, y2, x2; cin>>y1>>x1>>y2>>x2;
            y1--, x1--, y2--, x2--;
            if(isRed[y1][x1] && isRed[y2][x2] && uf.same(p2i(y1, x1), p2i(y2, x2))) cout << "Yes" << endl;
            else cout << "No" << endl;
            //cout << p2i(y1, x1) << "," << p2i(y2, x2) << endl;
        }
    }
}