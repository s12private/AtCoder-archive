#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  long long K;
  cin >> S >> K;

  char c = '1';
  for(long long i=0; i<S.size(); i++){
    if(S[i] != '1'){
      c = S[i];
      break;
    }
    if(K-1 == i && S[i] == '1'){
      break;
    }
  }
  cout << c << endl;
}