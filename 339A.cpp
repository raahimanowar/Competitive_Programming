#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string num = "";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            num += s[i];
        }
    }

    sort(num.begin(), num.end());

    for(int i = 0; i < num.length(); i++) {
        cout << num[i];

        if(i < num.length() - 1) {
            cout << "+";
        }
    }

    return 0;
}