#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5];
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(abs(a[i]-a[j]) > k){
                cout << ":(" << endl;
                return 0;
            }
        }
    }

    cout << "Yay!" << endl;
}
