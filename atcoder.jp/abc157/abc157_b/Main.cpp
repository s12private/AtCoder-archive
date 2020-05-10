#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[3][3];
    bool c[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> A[i][j];
            c[i][j] = false;
        }
    }
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int b;
        cin >> b;
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(A[j][k] == b){
                    c[j][k] =true;
                }
            }
        }
    }

    bool ok = false;
    for(int i=0; i<3; i++){
        if(c[i][0] && c[i][1] && c[i][2]){
            ok = true;
        }
        if(c[0][i] && c[1][i] && c[2][i]){
            ok = true;
        }
        if(c[0][0] && c[1][1] && c[2][2]){
            ok = true;
        }
        if(c[2][0] && c[1][1] && c[0][2]){
            ok = true;
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}