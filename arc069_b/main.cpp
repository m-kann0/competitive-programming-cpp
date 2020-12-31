#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    rep(first, 2) {
        rep(second, 2) {
            bool sheep[n];
            sheep[0] = first == 0;
            sheep[1] = second == 0;
            for (int i = 2; i < n; i++) {
                if (sheep[i - 1]) {
                    if (s[i - 1] == 'o') {
                        sheep[i] = sheep[i - 2];
                    } else {
                        sheep[i] = !sheep[i - 2];
                    }
                } else {
                    if (s[i - 1] == 'o') {
                        sheep[i] = !sheep[i - 2];
                    } else {
                        sheep[i] = sheep[i - 2];
                    }
                }
            }

            bool ok = true;
            rep(i, n) {
                int left = (i + n - 1) % n;
                int right = (i + 1) % n;
                if (sheep[i]) {
                    if (s[i] == 'o') {
                        if (sheep[left] != sheep[right]) {
                            ok = false;
                        }
                    } else {
                        if (sheep[left] == sheep[right]) {
                            ok = false;
                        }
                    }
                } else {
                    if (s[i] == 'o') {
                        if (sheep[left] == sheep[right]) {
                            ok = false;
                        }
                    } else {
                        if (sheep[left] != sheep[right]) {
                            ok = false;
                        }
                    }
                }
            }
            if (ok) {
                rep(i, n) {
                    if (sheep[i]) {
                        cout << 'S';
                    } else {
                        cout << 'W';
                    }
                }
                cout << endl;
                return 0;
            }
        }
    }

    cout << "-1" << endl;

    return 0;
}
