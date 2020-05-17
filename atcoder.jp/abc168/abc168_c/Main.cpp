#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,H,M;
    cin>>A>>B>>H>>M;
    double h = H + M/60.0;
    double deg =abs((h/12.0*360 - (M%60)/60.0*360.0) * M_PI / 180.0);
    //cout <<fixed << setprecision(10)<<deg<<endl;
    double c = sqrt(A*A + B*B - 2*A*B*cos(deg));

    cout << fixed << setprecision(10) << c << endl;
}

