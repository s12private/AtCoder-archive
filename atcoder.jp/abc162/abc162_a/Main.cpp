#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if(to_string(N).find("7") != string::npos){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
