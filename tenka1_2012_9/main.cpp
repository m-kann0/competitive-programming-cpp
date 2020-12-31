#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        if (isPrime(i)) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
