#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, k, q;
        int validDay = 0;
        cin >> n >> k >> q;

        vector<long long> a(n);

        for(long long &x : a) {
            cin >> x;

            if(x <= q) {
                validDay++;
            }
        }

        if(k <= validDay) {
            
        }
    }

    return 0;
}