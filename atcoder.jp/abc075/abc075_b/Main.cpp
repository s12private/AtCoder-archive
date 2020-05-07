#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  string S[H];
  for(int i=0; i<H; i++){
    cin >> S[i];
  }

  int n[3] = {-1, 0, 1};
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      int count = 0;
      if(S[i][j] == '.'){
        for(int y : n){
          y += i;
          for(int x : n){
            x += j;
            if(x == j && y == i || x < 0 || x >= W || y < 0 || y >= H) continue;
            if(S[y][x] == '#') count++;
          }
        }
        S[i][j] = to_string(count)[0];
      }
    }
  }

  for(int i=0; i<H; i++){
    cout << S[i] << endl;
  }
}
