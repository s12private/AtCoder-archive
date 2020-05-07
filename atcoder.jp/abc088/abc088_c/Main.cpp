#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int c[3][3];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> c[i][j];
    }
  }

  int a[3][2];
  for(int i=0; i<3; i++){
    for(int j=1; j<3; j++){
        a[i][j-1] = c[i][j] - c[i][j-1];
        if(i != 0){
          if(a[i][j-1] != a[i-1][j-1]){
            cout << "No" << endl;
            return 0;
          }
        }
    }
  }
  cout << "Yes" << endl;
}
