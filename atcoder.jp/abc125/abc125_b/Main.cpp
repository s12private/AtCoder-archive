#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >>N;
    int V[N];
    for(int i=0; i<N; i++){
        cin >> V[i];
    }

    long ans = 0;
    for(int i=0; i<N; i++){
        int c;
        cin >> c;
        if(V[i]-c > 0){
            ans += V[i]-c;
        }
    }

    cout << ans << endl;
}