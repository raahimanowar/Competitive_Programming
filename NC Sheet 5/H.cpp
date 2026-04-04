#include <bits/stdc++.h>

using namespace std;

void nTimes(int n, char c) {
    for(int i = 1; i <= n; i++) {
        cout << c << " ";
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        char c;

        cin >> n >> c;

        nTimes(n, c);
    }
    return 0;
}
