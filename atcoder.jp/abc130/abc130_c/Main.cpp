#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    long W,H,x,y;
    cin >> W>>H>>x>>y;

    int count = 2*x == W && 2*y == H ? 1 : 0;
    cout << fixed << setprecision(10) << (W*H)/2.0 << " " << count << endl;
}