#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int mnm = INT_MAX;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        if(abs(A[i]) < mnm) {
            mnm = abs(A[i]);
        }
    }

    cout << mnm << '\n';

    return 0;
}