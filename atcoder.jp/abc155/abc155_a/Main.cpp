#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C;

    if(A==B && A!=C || A==C && A!=B || B==C && A!=B){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
    