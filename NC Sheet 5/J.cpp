#include <bits/stdc++.h>

using namespace std;

double average(vector<double> a) {
    int n = a.size();
    double sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];
    }

    double avg = sum / n;

    return avg;
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double avg = average(a);

    cout << setprecision(7) << avg << endl;

    return 0;
}
