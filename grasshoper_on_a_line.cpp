#include<bits/stdc++.h>
using namespace std;    

int main() {
    int s = 0;
    int x, k, t;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> x >> k;

        if (x % k != 0) {
            cout << 1 << endl << x << endl;
        } else {
            cout << 2 << endl << 1 << " " << (x - 1) << endl;
        }
    }
}