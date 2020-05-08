#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N;
  cin >> N;
  string s = "123456";

  for(long i=0; i<N%30; i++){
    swap(s[i%5], s[i%5+1]);
  }

  cout << s << endl;
}