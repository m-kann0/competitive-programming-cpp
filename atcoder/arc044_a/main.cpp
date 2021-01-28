#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

bool is_prime(int n) {
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

bool is_like_prime(int n) {
    if (n == 1) {
        return false;
    }
    if ((n % 10) % 2 == 0 || (n % 10) == 5) {
        return false;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 3 == 0) {
        return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (is_prime(n) || is_like_prime(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}
