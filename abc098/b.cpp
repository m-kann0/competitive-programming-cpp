#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

bool contains(string s, int begin, int end, char target) {
    for (int i = begin; i < end; i++) {
        if (s[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int c = 'a'; c <= 'z'; c++) {
            if (contains(s, 0, i, c) && contains(s, i, n, c)) {
                count++;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}
