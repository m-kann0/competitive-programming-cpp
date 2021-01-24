#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> result;
    for (int i = 1; i <= 100; i++) {
        if (a % i == 0 && b % i == 0) {
            result.push_back(i);
        }
    }

    cout << result[result.size() - k] << endl;

    return 0;
}
