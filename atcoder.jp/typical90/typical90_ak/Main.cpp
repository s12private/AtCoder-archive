//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

/* RMQ：[0,n-1] について、区間ごとの最小値を管理する構造体
    set(int i, T x), build(): i番目の要素をxにセット。まとめてセグ木を構築する。O(n)
    update(i,x): i 番目の要素を x に更新。O(log(n))
    query(a,b): [a,b) での最小の要素を取得。O(log(n))
    find_rightest(a,b,x): [a,b) で x以下の要素を持つ最右位置を求める。O(log(n))
    find_leftest(a,b,x): [a,b) で x以下の要素を持つ最左位置を求める。O(log(n))
*/
template <typename T>
struct RMQ {
    const T e = -1e18;
    function<T(T, T)> fx = [](T x1, T x2) -> T { return max(x1, x2); };
    int n;
    vector<T> dat;
    RMQ(int n_) : n(), dat(n_ * 4, e) {
        int x = 1;
        while (n_ > x) {
            x *= 2;
        }
        n = x;
    }

    void set(int i, T x) { dat[i + n - 1] = x; }
    void build() {
        for (int k = n - 2; k >= 0; k--) dat[k] = fx(dat[2 * k + 1], dat[2 * k + 2]);
    }

    void update(int i, T x) {
        i += n - 1;
        dat[i] = x;
        while (i > 0) {
            i = (i - 1) / 2;  // parent
            dat[i] = fx(dat[i * 2 + 1], dat[i * 2 + 2]);
        }
    }

    // the minimum element of [a,b)
    T query(int a, int b) { return query_sub(a, b, 0, 0, n); }
    T query_sub(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) {
            return e;
        } else if (a <= l && r <= b) {
            return dat[k];
        } else {
            T vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
            T vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
            return fx(vl, vr);
        }
    }

    int find_rightest(int a, int b, T x) { return find_rightest_sub(a, b, x, 0, 0, n); }
    int find_leftest(int a, int b, T x) { return find_leftest_sub(a, b, x, 0, 0, n); }
    int find_rightest_sub(int a, int b, T x, int k, int l, int r) {
        if (dat[k] > x || r <= a || b <= l) {  // 自分の値がxより大きい or [a,b)が[l,r)の範囲外ならreturn a-1
            return a - 1;
        } else if (k >= n - 1) {  // 自分が葉ならその位置をreturn
            return (k - (n - 1));
        } else {
            int vr = find_rightest_sub(a, b, x, 2 * k + 2, (l + r) / 2, r);
            if (vr != a - 1) {  // 右の部分木を見て a-1 以外ならreturn
                return vr;
            } else {  // 左の部分木を見て値をreturn
                return find_rightest_sub(a, b, x, 2 * k + 1, l, (l + r) / 2);
            }
        }
    }
    int find_leftest_sub(int a, int b, T x, int k, int l, int r) {
        if (dat[k] > x || r <= a || b <= l) {  // 自分の値がxより大きい or [a,b)が[l,r)の範囲外ならreturn b
            return b;
        } else if (k >= n - 1) {  // 自分が葉ならその位置をreturn
            return (k - (n - 1));
        } else {
            int vl = find_leftest_sub(a, b, x, 2 * k + 1, l, (l + r) / 2);
            if (vl != b) {  // 左の部分木を見て b 以外ならreturn
                return vl;
            } else {  // 右の部分木を見て値をreturn
                return find_leftest_sub(a, b, x, 2 * k + 2, (l + r) / 2, r);
            }
        }
    }
};

int main() {
    ll W, N; cin>>W>>N;

    vector<ll> L(N), R(N), V(N);

    vector dp(N+1, vector<ll>(W+1, -1e18));
    rep(i, N) cin>>L[i]>>R[i]>>V[i];
    dp[0][0] = 0;

    for(ll i=1; i<=N; i++){
        RMQ<ll> rmq(W+1);
        for(ll j=0; j<=W; j++){
            rmq.set(j, dp[i-1][j]+V[i-1]);
        }
        rmq.build();
        for(ll j=0; j<=W; j++){
            chmax(dp[i][j], rmq.query(max(0ll, j-R[i-1]), max(0ll, j-L[i-1]+1)));
            chmax(dp[i][j], dp[i-1][j]);
        }
        /*
        for(ll j=0; j<=W; j++){
            for(ll k=L[i-1]; k<=R[i-1]; k++){
                if(j-k >= 0)
                    chmax(dp[i][j], dp[i-1][j-k]+V[i-1]);
            }
            chmax(dp[i][j], dp[i-1][j]);
        }
        */
    }
    cout << max(dp[N][W], -1LL)  << endl;
}