#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N;
  cin >> N;
  long a[N];
  for(long i=0; i<N; i++){
    cin >> a[i];
  }

  long ans = 0;
  for(long i=0; i<N; i++){
    ans += a[i]-1;
  }

  cout << ans << endl;
}