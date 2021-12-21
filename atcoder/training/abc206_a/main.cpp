#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;

    int price = 108 * N / 100;
    if (price < 206) {
        cout << "Yay!" << endl;
    } else if (price > 206) {
        cout << ":(" << endl;
    } else {
        cout << "so-so" << endl;
    }

    return 0;
}