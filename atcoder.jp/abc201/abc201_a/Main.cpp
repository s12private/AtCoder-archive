#define _GLIBCXX_DEBUG      //配列外参照の検出
#include <bits/stdc++.h>    //標準ライブラリをインクルード
using namespace std;        //std::の省略
typedef long long ll;       //long longをllに省略

int main() {
    vector<int> A(3); cin>>A[0]>>A[1]>>A[2];
    sort(A.begin(), A.end());
    if(A[2]-A[1] == A[1]-A[0]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}