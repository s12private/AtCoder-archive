#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    long N, K;
    cin>>N>>K;

    int count = 0;
    while(N > 0){
        N /= K;
        count++;
    }

    cout << count << endl;
}
    