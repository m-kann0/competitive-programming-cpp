#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    string prev = "";
    string current = "";
    rep(i, s.length()) {
        current.push_back(s[i]);
        if (prev == current) {

        } else {
            ans += 1;
            prev = current;
            current = "";
        }
    }

    cout << ans << endl;

    return 0;
}
