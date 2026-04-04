#include <bits/stdc++.h>

using namespace std;

int main() {
    double r, s;

    cin >> r >> s;


    if (r > (s / sqrt(2))) {
        cout << "Circle" << endl;
    } else if (r < (s / 2)) {
        cout << "Square" << endl;
    } else {
        cout << "Complex" << endl;
    }

    return 0;
}
