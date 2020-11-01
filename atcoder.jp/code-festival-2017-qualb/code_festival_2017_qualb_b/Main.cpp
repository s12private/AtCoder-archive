#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   ll n; cin>>n;
    map<ll, ll> D, T;
   rep(i, n){
       ll d; cin>>d;
       D[d]++;
   }
   // cout << D.count(2) << endl;
   ll m; cin>>m;
   rep(i, m){
       ll t; cin>>t;
       T[t]++;
   }

   for(auto a : T){
       if(!D.count(a.first)){
           cout << "NO" << endl;
           //cout << a.first << D.count(a.first) << endl;
           return 0;
       }else{
            if(D[a.first] < a.second){
                cout << "NO" << endl;
                //cout << a.first << D.count(a.first) << endl;
                return 0;
            }
       }
   }

   cout << "YES" << endl;
}