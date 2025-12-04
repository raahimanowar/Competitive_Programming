#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s, s2;

        cin >> s;

        int n = s.size();

        set<char>st(s.begin(), s.end());

        if (st.size() == 1) {
            cout << "NO" <<  endl;
        } else if (n % 2 == 1) {
            string s2 = s;
            s2.erase(n/2, 1);

            set<char>st2(s2.begin(), s2.end());

            cout << (st2.size() == 1 ? "NO" : "YES") << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}