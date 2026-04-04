#include <bits/stdc++.h>

using namespace std;

void min_max(vector<int> a) {
    int n = a.size();
    int mn = a[0];
    int mx = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] < mn){
            mn = a[i];
        } else if (a[i] > mx) {
            mx = a[i];
        }
    }

    cout << mn << " " << mx << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    min_max(a);

    return 0;
}
