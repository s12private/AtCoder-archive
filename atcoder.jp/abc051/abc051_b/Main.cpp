#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, S;
  cin >> K >> S;

  long count = 0;
  for(int i=0; i<=K; i++){
    int X = i;
    for(int j=0; j<=K; j++){
      int Y = j;
      int Z = S-X-Y;
      if(Z <= K && Z >= 0){
        count++;
      }
    }
  }

  cout << count << endl;
}