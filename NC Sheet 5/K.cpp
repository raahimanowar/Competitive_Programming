#include <bits/stdc++.h>
using namespace std;

void shiftRight(vector<int> &a, int x) {
    int n = a.size();
    x = x % n;

    rotate(a.rbegin(), a.rbegin() + x, a.rend());
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    shiftRight(a, x);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
