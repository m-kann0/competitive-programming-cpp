#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    int w;
    cin >> s >> w;

    rep(i, s.length()) {
        if (i % w == 0) {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}
