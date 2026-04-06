#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int lastNum = a.back();
        int largestNum = *max_element(a.begin(), a.end() - 1);

        int mx = lastNum + largestNum;

        cout << mx << endl;
    }

    return 0;
}