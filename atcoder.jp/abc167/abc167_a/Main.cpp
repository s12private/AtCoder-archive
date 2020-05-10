#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T;
    cin>>S>>T;
    if(T.substr(0, T.size()-1) == S){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}