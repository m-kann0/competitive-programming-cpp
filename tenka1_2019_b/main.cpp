#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    string s;
    cin >> n >> s >> k;

    rep(i, n) {
        if (i == k - 1) {
            continue;
        }
        if (s[i] != s[k - 1]) {
            s[i] = '*';
        }
    }

    cout << s << endl;

    return 0;
}
