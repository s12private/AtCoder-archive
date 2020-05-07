#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a[N];
  bool b[N];
  for(int i=0; i<N; i++){
    cin >> a[i];
    b[i] = false;
  }

  int i = 0;
  b[i] = true;
  int count = 0;
  while(true){
    i = a[i]-1;
    if(b[i]){
      cout << -1 << endl;
      return 0;
    }
    count++;
    b[i] = true;
    if(i == 1){
      cout << count << endl;
      return 0;
    }
  }
}
