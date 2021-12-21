#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string N;
    cin >> N;

    auto is_ok = [](string s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    };

    bool result = false;
    for (int i = 0; i <= 10; ++i) {
        string s = "";
        for (int j = 0; j < i; ++j) {
            s += '0';
        }
        result |= is_ok(s + N);
    }
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}