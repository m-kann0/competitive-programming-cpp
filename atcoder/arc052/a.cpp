#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.length()) {
        if (isdigit(s[i])) {
            ans *= 10;
            ans += s[i] - '0';
        }
    }
    cout << ans << endl;

    return 0;
}
