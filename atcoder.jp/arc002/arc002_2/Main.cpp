#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

std::vector<std::string> split(std::string str, char del) {
    int first = 0;
    int last = str.find_first_of(del);

    std::vector<std::string> result;

    while (first < str.size()) {
        std::string subStr(str, first, last - first);

        result.push_back(subStr);

        first = last + 1;
        last = str.find_first_of(del, first);

        if (last == std::string::npos) {
            last = str.size();
        }
    }

    return result;
}

int main() {
    int ld[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    string s; cin>>s;
    auto ss = split(s, '/');
    ll y = stoll(ss[0]);
    ll m = stoll(ss[1]);
    ll d = stoll(ss[2]);

    while(y%(m*d) != 0){
        if(d == ld[m-1]+(((y%4==0&&y%100!=0)||y%400==0)&&m==2)){
            m++;
            d = 0;
        }
        if(m > 12) m = 1, y++;
        d++;
    }
    cout << y << "/" << setfill('0') << setw(2)  << m << "/" << setfill('0') << setw(2) << d << endl;
}