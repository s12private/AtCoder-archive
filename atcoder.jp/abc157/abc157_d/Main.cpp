//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
using namespace std;
using namespace boost::multiprecision;
using namespace atcoder;
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

int main() {
    ll N,M,K; cin>>N>>M>>K;
    vector<ll> f(N);
    vector<map<ll, bool>> b(N);
    UnionFind fr(N), bl(N);
    rep(i, M){
        ll A,B; cin>>A>>B;
        A--, B--;
        f[A]++, f[B]++;
        fr.unite(A, B);
    }
    rep(i, K){
        ll A,B; cin>>A>>B;
        A--, B--;
        b[A][B] = true;
        b[B][A] = true;
        bl.unite(A, B);
    }
    rep(i, N){
        ll res = fr.size(i)-f[i]-1;
        for(auto v : b[i]){
            if(fr.same(i, v.first)) res--;
        }

        cout << res << endl;
    }
}