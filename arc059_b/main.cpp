#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            printf("%d %d\n", i, i+1);
            return 0;
        }
    }

    for (int i = 2; i < s.length(); i++) {
        if (s[i] == s[i - 2]) {
            printf("%d %d\n", i - 1, i + 1);
            return 0;
        }
    }

    cout << "-1 -1" << endl;

    return 0;
}
