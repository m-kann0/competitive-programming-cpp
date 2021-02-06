#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int maximize(int n) {
    if (n / 100 != 9) {
        return 900 + (n % 100);
    }

    if ((n % 100) / 10 != 9) {
        return n - ((n % 100) / 10 * 10) + n % 10 + 90;
    }

    return n - (n % 10) + 9;
}

int minimize(int n) {
    if (n / 100 != 1) {
        return (n % 100) + 100;
    }

    if ((n % 100) / 10 != 0) {
        return n - ((n % 100) / 10 + 10) + n % 10;
    }

    return n - (n % 10);
}

int main() {
    string s, t;
    cin >> s >> t;

    s = s + t;

    int ans = -100000;
    rep(i, 6) {
        rep(j, 10) {
            if ((i == 0 || i == 3) && j == 0) {
                continue;
            }
            string temp(s);
            temp[i] = '0' + j;
            int a = stoi(temp.substr(0, 3)); // atoi(temp.substr(0, 3).c_str());
            int b = stoi(temp.substr(3, 3)); // atoi(temp.substr(3, 3).c_str());
            //printf("%d - %d = %d\n", a, b, a - b);
            ans = max(ans, a - b);
        }
    }

    cout << ans << endl;

    return 0;
}
