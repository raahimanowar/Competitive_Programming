#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

     while(t--) {
        int n;
        int result = 0;

        cin >> n;

        vector<int> a(n);
        int total_xor = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            total_xor ^= a[i];
        }

        //for(int i = 0; i < n; i++) {
        //    result = max(result, total_xor ^ a[i]);
        //}

        cout << total_xor << endl;
     }

    return 0;
}
