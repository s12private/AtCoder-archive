#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a[N];
  bool color[8];
  for(int i=0; i<8; i++){
    color[i] = false;
  }
  for(int i=0; i<N; i++){
    cin >> a[i];
  }
  int ans = 0;
  for(int i=0; i<N; i++){
    int rate = a[i];
    if(rate < 400){
      color[0] = true;
    }else if(rate < 800){
      color[1] = true;
    }else if(rate < 1200){
      color[2] = true;
    }else if(rate < 1600){
      color[3] = true;
    }else if(rate < 2000){
      color[4] = true;
    }else if(rate < 2400){
      color[5] = true;
    }else if(rate < 2800){
      color[6] = true;
    }else if(rate < 3200){
      color[7] = true;
    }else{
      ans++;
    }
  }

  int count = 0;
  for(int i=0; i<sizeof(color); i++){
    if(color[i]) count++;
  }

  cout << (count == 0 ? 1 : count) << " " << (count+ans) << endl;
}
