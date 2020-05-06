#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long D,N;
  cin >> D >> N;

  long ans = pow(100, D)*N;

  if(N == 100){
    ans += pow(100, D);
  }

  cout << ans << endl;
}
