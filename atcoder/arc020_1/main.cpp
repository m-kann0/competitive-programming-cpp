#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    if (abs(a) < abs(b)) {
        cout << "Ant" << endl;
    } else if (abs(a) > abs(b)) {
        cout << "Bug" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}
