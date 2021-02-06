#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

bool solve(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int pos = -1;
    bool found = false;
    for (int i = pos + 1; i < s.length(); i++) {
        if (s[i] == 'i') {
            pos = i;
            found = true;
            break;
        }
    }

    if (!found) {
        return false;
    }

    found = false;
    for (int i = pos + 1; i < s.length(); i++) {
        if (s[i] == 'c') {
            pos = i;
            found = true;
            break;
        }
    }

    if (!found) {
        return false;
    }

    found = false;
    for (int i = pos + 1; i < s.length(); i++) {
        if (s[i] == 't') {
            pos = i;
            found = true;
            break;
        }
    }

    return found;
}

int main() {
    string s;
    cin >> s;

    bool result = solve(s);
    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
