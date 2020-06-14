#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
  string s;
  cin>>s;

  char c[4] = {'A','C','G','T'};

  int max = 0;
  int count = 0;
  rep(i, s.length()){
    bool flag = false;
    for(char a : c){
      if(s[i] == a){
        flag = true;
        break;
      }
    }
    //cout << flag << endl;
    if(flag){
      count++;
    }else{
      count = 0;
    }
    max = std::max(count, max);
  }

  cout << max << endl;
}
