#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    double x0,y0,x2,y2; cin>>x0>>y0>>x2>>y2;

    double centerX = (x2+x0)/2.0;
    double centerY = (y2+y0)/2.0;

    double deg = 360.0/N * M_PI / 180.0;
    double a = centerX;
    double b = centerY;
    double resX = cos(deg)*(x0-a) - sin(deg)*(y0-b) + a;
    double resY = sin(deg)*(x0-a) + cos(deg)*(y0-b) + b;
    cout << fixed << setprecision(10) << resX << " " << resY << endl;
}