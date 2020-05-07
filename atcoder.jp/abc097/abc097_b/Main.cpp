#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  string s;
  for(int b=1; b<=33; b++){
    for(int p=2; p<10; p++){
      int a = pow(b, p);
      if(a <= N){
        ans = max(ans, a);
      }else{
        break;
      }
    }
  }
  cout << ans << endl;
}
