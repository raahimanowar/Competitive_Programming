#include <bits/stdc++.h>
using namespace std;

int balanced(vector<int>& a, int k) {
    int validProblem = 1;
    int maxValid = 1;
    sort(a.begin(), a.end());

    for(int i = 0; i < a.size() - 1; i++) {
        if(a[i + 1] - a[i] <= k) {
            validProblem++;
            if(validProblem > maxValid) {
                maxValid = validProblem;
            }
        } else {
            validProblem = 1;
        }
    }

    int remove = a.size() - maxValid;

    return remove;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int &i : a) {
            cin >> i;
        }

        int remove = balanced(a, k);

        cout << remove << endl;

    }
    return 0;
}