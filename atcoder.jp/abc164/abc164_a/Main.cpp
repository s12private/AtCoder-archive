#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, W;
  cin >> S >> W;
  cout << (W>=S ? "unsafe" : "safe") << endl;
}
