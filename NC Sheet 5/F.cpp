#include <bits/stdc++.h>

using namespace std;

long long result(int x, int n) {
    long long sum = 0;
    long long initialPower = x * x;
    for (int i = 2; i <= n; i +=2) {
        sum += initialPower;
        initialPower *= x * x;
    }

    return sum;
}

int main () {
    int X, N;
    cin >> X >> N;

    long long sum = result(X, N);

    cout << sum << endl;
    return 0;
}
