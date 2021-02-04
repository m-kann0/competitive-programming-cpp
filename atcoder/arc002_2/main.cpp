#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

struct ymd {
    int y;
    int m;
    int d;
};

int eom[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap_year(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}

ymd next_day(ymd now) {
    int dm = eom[now.m - 1];
    if (now.m == 2 && is_leap_year(now.y)) {
        dm = 29;
    }
    now.d += 1;
    if (now.d > dm) {
        now.d = 1;
        now.m += 1;
    }
    if (now.m > 12) {
        now.m = 1;
        now.y += 1;
    }
    return now;
}

int main() {
    string s;
    cin >> s;

    string y_str = s.substr(0, 4);
    string m_str = s.substr(5, 2);
    if (m_str[0] == '0') {
        m_str.erase(m_str.begin());
    }
    string d_str = s.substr(8, 2);
    if (d_str[0] == '0') {
        d_str.erase(d_str.begin());
    }
    ymd ymd;
    ymd.y = stoi(y_str);
    ymd.m = stoi(m_str);
    ymd.d = stoi(d_str);
    while (ymd.y % (ymd.m * ymd.d) != 0) {
        ymd = next_day(ymd);
    }
    printf("%d/%02d/%02d\n", ymd.y, ymd.m, ymd.d);

    return 0;
}
