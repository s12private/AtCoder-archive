#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   int D,T,S;
   cin>>D>>T>>S;
   if((double)D/T <= S){
       cout << "Yes" << endl;
   }else{
       cout << "No" << endl;
   }
}