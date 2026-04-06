#include <bits/stdc++.h>
using namespace std;

void concate(vector<int>& a, vector<int>& b) {
    vector<int> c;

    c.insert(c.end(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());

    for(int i : c) {
        cout << i << " ";
    }
}

int main() {
    int n, x;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    concate(a, b);
    return 0;
}
