#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;

       vector<int> b(n);
       vector<int> a;

        for(int i = 0; i < n; i++) {
            cin >> b[i];
            
            if(!a.empty() && a.back() > b[i]) {
                a.push_back(1);
            }

            a.push_back(b[i]);
        }

        cout << a.size() << '\n';
        for(int x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}