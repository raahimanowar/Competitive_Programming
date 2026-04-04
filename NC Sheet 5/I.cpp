#include <bits/stdc++.h>

using namespace std;

void matrix(int n,int x, int y) {
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    x--, y--;

    swap(a[x], a[y]);

    for(int i = 0; i < n; i++) {
        swap(a[i][x], a[i][y]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n, x, y;

    cin >> n >> x >> y;

    matrix(n, x, y);

    return 0;
}
