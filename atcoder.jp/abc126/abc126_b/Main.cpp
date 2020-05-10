#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int a = atoi(S.substr(0,2).c_str());
    int b = atoi(S.substr(2,4).c_str());  
    if(a >= 1 && a<=12){
        if(b >= 13 || b == 0){
            cout << "MMYY" << endl;
        }else{
            cout << "AMBIGUOUS" << endl;
        }
        return 0;
    }else{
        if(b >= 13 || b == 0){
            cout << "NA" << endl;
        }else{
            cout << "YYMM" << endl;
        }
    }
}