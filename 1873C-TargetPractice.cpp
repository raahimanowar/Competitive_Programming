#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        int ans = 0;
        for(int i = 0; i < 10; i++) {
            vector<char> a(10);

            for(int j = 0; j < 10; j++) {
                cin >> a[j];
                if (a[j] == 'X') {
                    int border = min({i, j, 9 - i, 9 - j});
                    ans += border + 1;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}