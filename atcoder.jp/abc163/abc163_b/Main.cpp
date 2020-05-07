#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  for(int i=0; i<M; i++){
    int a;
    cin >> a;
    N -= a;
  }

  cout << (N>=0 ? N : -1) << endl;
}
