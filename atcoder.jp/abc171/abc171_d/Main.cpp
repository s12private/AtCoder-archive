#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   ll N; cin>>N;
   ll A[N];
   map<ll, ll> map;
   ll sum = 0;
   rep(i, N){
       cin>>A[i];
       map[A[i]-1]++;
   }

    for(auto m : map){
        sum += (m.first+1)*m.second;
    }

   ll Q; cin>>Q;
   ll B[Q], C[Q];
   rep(i, Q) cin>>B[i]>>C[i];
    rep(i, Q){
        sum -= map[B[i]-1]*(B[i]-1);
        sum += (map[B[i]-1])*(C[i]-1);
        map[C[i]-1] += map[B[i]-1];
        map.erase(B[i]-1);
        cout << sum << endl;
    }
}
