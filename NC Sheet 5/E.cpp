#include <bits/stdc++.h>

using namespace std;

void doSwap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main () {
    int X, Y;

    cin >> X >> Y;

    doSwap(X, Y);

    cout << X << " " << Y;

    return 0;
}
