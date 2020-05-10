#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S; cin >> S;

    bool ok = true;
    for(int i=0; i<S.size(); i++){
        if(S[i] != S[S.size()-1-i]){
            ok = false;
        }
    }

    for(int i=0; i<(S.size()-1)/2; i++){
        if(S[i] != S[(S.size()-1)/2-i-1]){
            ok = false;
        }
    }

    for(int i=(S.size()+3)/2-1; i<S.size(); i++){
        if(S[i] != S[S.size()-i-1]){
            ok = false;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
}