#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        int maxGap = a[0];
        int prev = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            maxGap = max(maxGap, a[i] - prev);
            prev = a[i];
        }

        maxGap = max(maxGap, 2 * (x - a[n - 1]));

        cout << maxGap << '\n';
    }

    return 0;
}