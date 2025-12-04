#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int minOdd = INT_MAX, minEven = INT_MAX;
        bool hasOdd = false, hasEven = false;

        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if (arr[i] % 2 == 0) {
                hasEven = true;
                minEven = min(minEven, arr[i]);
            } else {
                hasOdd = true;
                minOdd = min(minOdd, arr[i]);
            }
        } 
        if (!hasOdd || !hasEven){
            cout << "YES" << endl;
        } else {
            if (minOdd < minEven){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}