#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int open = count(s.begin(), s.end(), '(');
        int close = n - open;

        if (open == close) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}