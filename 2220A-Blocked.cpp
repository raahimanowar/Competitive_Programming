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

        vector<int> a(n);
        set<int> s;

        for(int &x : a) {
            cin >> x;
            s.insert(x);
        }

        //set<int> s;
        //s.insert(a.begin(), a.end());

        if(s.size() != n) {
            cout << "-1" << endl;
            continue;
        }

        sort(a.rbegin(), a.rend());
        for(int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}