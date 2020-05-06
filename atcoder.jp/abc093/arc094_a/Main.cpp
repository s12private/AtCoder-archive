#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n[3];
  cin >> n[0] >> n[1] >> n[2];

  int count = 0;
  while(!(n[0] == n[1] && n[1] == n[2])){
    sort(n, n+3);

    if(n[0] != n[1]){
      n[0] += 2;
    }else{
      n[0] += 1;
      n[1] += 1;
    }

    count++;
  }

  cout << count << endl;
}
