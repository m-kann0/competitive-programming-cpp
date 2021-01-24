#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        int x = i * 100 + i * 10 + i;
        if (x >= n) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
