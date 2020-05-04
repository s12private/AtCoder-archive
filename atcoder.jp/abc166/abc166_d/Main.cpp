#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long X;
    cin >> X;
    for(long long A=-1000; A<=1000; A++){
      for(long long B=-1000; B<=1000; B++){
        if(X == pow(A, 5) - pow(B, 5)){
          cout << A << " " << B << endl;
          return 0;
        }
      }
    }
}