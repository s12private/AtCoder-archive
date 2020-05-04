#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  long count = 0;
  for(int i=1; i<S.size(); i++){
    char fi = S[i-1];
    char se = S[i];

    if(fi == se){
      if(fi == '0'){
        S[i] = '1';
      }else{
        S[i] = '0';
      }
      count++;
    }
  }

  cout << count << endl;
}