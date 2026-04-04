#include <bits/stdc++.h>

using namespace std;

int center(int x1, int x2) {
    int cx = (x1 + x2) / 2;
    //int cy = (y1 + y2) / 2;

    return cx;
}

int radius(int x1, int y1, int x2, int y2) {
    int r = (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))) / 2;

    return r;
}

int distance(int c1x, int c1y, int c2x, int c2y) {
    int d = sqrt(pow((c2x - c1x), 2) + pow((c2y - c1y), 2));

    return d;
}

int main() {
    int x1, y1, x2, y2;

    int x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int c1x = center(x1, x2);
    int c1y = center(y1, y2);
    int c2x = center(x3, x4);
    int c2y = center(y3, y4);

    int r1 = radius(x1, y1, x2, y2);
    int r2 = radius(x3, y3, x4, y4);

    int d = distance(c1x, c1y, c2x, c2y);

    if (d >= abs(r1 - r2) && d <= r1 + r2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
