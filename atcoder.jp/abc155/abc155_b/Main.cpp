#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }

    for(int i=0; i<N; i++){
        if(A[i]%2==1) continue;
        if(!(A[i]%3==0 || A[i]%5==0)){
            cout << "DENIED" << endl;
            return 0;
        }
    }

    cout << "APPROVED" << endl;
}