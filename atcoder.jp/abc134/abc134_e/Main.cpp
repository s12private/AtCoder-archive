//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    deque<ll> a;
    rep(i, N){
        ll A; cin>>A;

        auto itr = lower_bound(a.begin(), a.end(), A);
        ll index = itr - a.begin();

        if(index == 0){
            a.push_front(A);
            continue;
        }

        a[index-1] = A;
    }
    cout << a.size() << endl;
}