#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  long count = 0;
  for(long i=0; i<S.size(); i++){
    if(S[i] == '0'){
      count++;
    }
  }


  long a = S.size()-count;
  cout << min(a, count)*2 << endl;
}
