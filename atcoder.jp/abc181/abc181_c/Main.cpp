#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

struct Point{
    ll x, y;
};

double dis(Point a, Point b){
    return sqrt(pow((a.x-b.x), 2)+pow(a.y-b.y, 2));
}


int main(){
    ll N; cin>>N;
    vector<Point> p(N);
    for(ll i=0; i<N; i++){
        cin>>p[i].x>>p[i].y;
    }

    for(ll i=0; i<N; i++){
        for(ll j=i+1; j<N; j++){
            for(ll k=j+1; k<N; k++) {
                Point a = p[i];
                Point b = p[j];
                Point c = p[k];
                /*
                cout<< a.x << " " << a.y << endl;
                cout<< b.x << " " << b.y << endl;
                cout<< c.x << " " << c.y << endl;
                cout << dis(a, b) << endl;
                cout << dis(a, c) << endl;
                cout << dis(b, c) << endl;
                cout << fabs(dis(a, b) + dis(a, c) - dis(b, c)) << endl;
                cout << fabs(dis(a, b) + dis(b, c) - dis(a, c)) << endl;
                cout << fabs(dis(a, c) + dis(b, c) - dis(a, b)) << endl;
                 */
               if(fabs(dis(a, b) + dis(a, c) - dis(b, c)) < 1e-10 || fabs(dis(a, b) + dis(b, c) - dis(a, c)) < 1e-10
               || fabs(dis(a, c) + dis(b, c) - dis(a, b)) < 1e-10){
                   cout << "Yes" << endl;
                   return 0;
               }
            }
        }
    }

    cout << "No" << endl;
}