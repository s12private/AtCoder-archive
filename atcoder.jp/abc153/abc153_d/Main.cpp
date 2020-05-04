//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long H;
  cin >> H;
  
  long count = 0;
  for(long i=H; i>0; i/=2){
    count++;
  }

  long ans = (pow(2, count)-1);
  cout << ans << endl;
}