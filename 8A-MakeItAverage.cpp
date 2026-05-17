#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff = abs(a + c - 2 * b);

        cout << (diff + 1) / 2 << '\n';
    }

    return 0;
}