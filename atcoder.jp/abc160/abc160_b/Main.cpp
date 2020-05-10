#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    long X;
    cin >> X;

    long ans = 0;
    ans += 1000*(X/500) + 5*((X-(X/500)*500)/5);
    cout << ans << endl;
}