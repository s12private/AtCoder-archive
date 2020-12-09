//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    priority_queue<ll> A;
    rep(i, N){
        ll a; cin>>a;
        A.push(a);
    }

    vector<pair<ll, ll>> v;
    rep(i, M){
        ll B, C; cin>>B>>C;
        v.push_back(make_pair(C, B));
    }

    sort(v.rbegin(), v.rend());

    ll sum = 0;
    ll j = 0;
    for(ll i=0; i<N; i++){
        if(j < M && A.top() < v[j].first){
            sum += v[j].first;
            v[j].second--;
            if(v[j].second == 0) j++;
        }else{
            sum += A.top();
            A.pop();
        }
    }
    cout << sum << endl;
}