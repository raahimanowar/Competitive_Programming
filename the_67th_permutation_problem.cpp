#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int n;

        cin >> n;

        for(int i = 0; i < n; i++){
            int small = i + 1;
            int median = (3 * n) - (2 * i) -1;
            int large = (3 * n) - (2 * i);

            cout << small << " " << median << " " << large << " ";
        }
        cout << "\n";
    }

    return 0;
}
