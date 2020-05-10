#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, A, B;
    cin >>N>>A>>B;

    long long x = N%(A+B);
    long long ans = min(A, x);
    ans = ans + A*(N/(A+B));
    cout << ans << endl;
}