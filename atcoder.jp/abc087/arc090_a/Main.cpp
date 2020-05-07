#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[2][N];
  for(int i=0; i<2; i++){
    for(int j=0; j<N; j++){
      cin >> A[i][j];
    }
  }

  int max = 0;
  for(int i=0; i<N; i++){
    int sum = 0;
    for(int j=0; j<N; j++){
      if(i >= j){
        sum += A[0][j];
      }
      if(i <= j){
        sum += A[1][j];
      }
    }
    max = std::max(max, sum);
  }

  cout << max << endl;
}
