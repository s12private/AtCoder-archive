#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
   long N; cin>>N;
   ll sum = 1;
   bool flag = false;
   rep(i, N){
       ll A;
       cin>>A;

        int len1 = to_string(A).length()-1;
        int len2 = to_string(sum).length()-1;
        if(sum%(ll)pow(10, len2) * A%(ll)pow(10, len1) > 10){
            len1 += 1;
        }

       sum *= A;

        if(len1 + len2 > 18){
            flag = true;
        }
       if(sum > 1000000000000000000 || A > 1000000000000000000){
           flag = true;
       } 
        if(A == 0){
            cout << 0 << endl;
            return 0;
        }
   }

    if(flag){
        cout << "-1" << endl;
        return 0;
    }
   cout << sum << endl;
}
