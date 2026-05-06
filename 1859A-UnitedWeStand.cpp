#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b, c;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if(a[0] == a[n - 1]) {
            cout << -1 << endl;
            continue;
        }

        long long minEle = a[0];

        for(int ele : a) {
            if(ele == minEle) {
                b.push_back(ele);
            } else {
                c.push_back(ele);
            }
        }

        cout << b.size() << " " << c.size() << endl;
        for(int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        } 
        cout << '\n';

        for(int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        } 
        cout << '\n';
    }

    return 0;
}