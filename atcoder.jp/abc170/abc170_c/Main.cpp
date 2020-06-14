#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
  int X,N;
  cin>>X>>N;
  int p[N];
  rep(i, N) cin>>p[i];

  vector<bool> a(100, false);
  rep(i, N){
    a[p[i]-1] = true;
  }

  int min = 101;
  for(int i=X-1; i<100; i++){
    if(!a[i]){
      min = i+1;
      break;
    }
  }

  for(int i=X-1; i>=0; i--){
    if(!a[i]){
      if(abs(X-(i+1)) <= abs(X-min)){
        min = i+1;
        break;
      }
    }
  }

  if(min == 101){
    if(X < 51) min = 0;
  }

  if(X==1 && min == 2){
    min = 0;
  }

  cout << min << endl;
}
