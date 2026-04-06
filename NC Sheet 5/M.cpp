#include <bits/stdc++.h>
using namespace std;

int distinct(vector<int>& a) {
    set<int> s(a.begin(), a.end());

    return s.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int distinctNum = distinct(a);

    cout << distinctNum << endl;

    return 0;
}