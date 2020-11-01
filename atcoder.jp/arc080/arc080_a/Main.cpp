#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   ll n; cin>>n;
   vector<ll> A(n);
   rep(i, n) cin>>A[i];

   ll f=0, t=0;
   for(ll a : A){
       if(a%4 == 0) f++;
       else if(a%2 == 0) t++;
   }

   n = n-f-t + t%2;
   if(n-1 <= f){
       cout << "Yes" << endl;
   }else{
       cout << "No" << endl;
   }
}