#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int ans = 0;
    if(A>B){
        ans += A;
        A--;
    }else{
        ans += B;
        B--;
    }
    if(A>B){
        ans += A;
        A--;
    }else{
        ans += B;
        B--;
    }
    cout << ans << endl;
}