#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  char s[H][W];
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> s[i][j];
    }
  }

  int t[2] = {-1, 1};
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      if(s[i][j] == '.') continue;
      bool ok = false;
      for(int ver : t){
        if(i+ver >= 0 && i+ver < H){
          if(s[i+ver][j] == '#'){
            ok = true;
            break;
          }
        }
      }
      for(int hori : t){
        if(j+hori >= 0 && j+hori < W){
          if(s[i][j+hori] == '#'){
            ok = true;
            break;
          }
        }
      }
      if(!ok){
        cout << "No" << endl;
        return 0; 
      }
    }
  }
  cout << "Yes" << endl;
}
