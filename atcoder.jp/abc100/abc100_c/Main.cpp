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
    if(a[i] %2 == 0){
      for(int j=a[i]; j%2==0; j=j/2){
        ans++;
      }
    }
  }

  cout << ans << endl;
}
