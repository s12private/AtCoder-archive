#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    long a[3], k;
    cin>>a[0]>>a[1]>>a[2]>>k;

    long ans = 0;
    for(int i=0; i<3; i++){
        if(i == 0) ans += min(k, a[i]);
        if(i == 2) ans -= min(k, a[i]);
        k -= a[i];
        if(k < 0) break;
    }

    cout << ans << endl;
}