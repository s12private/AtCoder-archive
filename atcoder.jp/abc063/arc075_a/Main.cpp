#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int s[N];
  int sum = 0;
  for(int i=0; i<N; i++){
    cin >> s[i];
    sum += s[i];
  }

  sort(s, s+N);
  for(int i=0; i<N; i++){
    if(sum%10!=0)break;
    else if(s[i]%10!=0)sum-=s[i];
  }
  cout<<(sum%10==0?0:sum);
}
