#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    //int sum = 0;

    cin >> t;

    while(t--) {
        int sum = 0;
        vector<int> elements;

        for( int i = 0; i < 7; i++) {
            int x;

            cin >> x;

            elements.push_back(x);
        }

        sort(elements.begin(), elements.end());

        for( int i = 0; i < elements.size(); i++) {
            if(i < 6) {
                elements[i] *= -1;
            }
            sum += elements[i];

        }

        cout << sum << endl;

    }

    return 0;
}
