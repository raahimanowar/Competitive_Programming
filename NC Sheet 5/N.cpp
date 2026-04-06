#include <bits/stdc++.h>
using namespace std;

void shiftZero(vector<int>& a) {
    int j = 0;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    while(j < a.size()){
        a[j] = 0;
        j++;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);

    for(int &i : a) {
        cin >> i;
    }

    shiftZero(a);

    for(int i : a) {
        cout << i << " ";
    }

    return 0;
}