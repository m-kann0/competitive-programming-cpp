#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int a1 = (n / 10) * 100 + (n % 10) * 15;
    int a2 = (n / 10) * 100;
    if (n % 10 != 0) {
        a2 += 100;
    }

    cout << min(a1, a2) << endl;

    return 0;
}
