#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;

    int x = N * 800;
    int y = (N / 15) * 200;

    cout << x - y << endl;

    return 0;
}
