#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int count = 0;
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
        count += A[i];
    }

    sort(A, A+N);
    for(int i=0; i<M; i++){
        if(A[N-i-1] < count/(4.0*M)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}