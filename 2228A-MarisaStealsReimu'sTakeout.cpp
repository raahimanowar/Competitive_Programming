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
  
        vector<int> w(n);  
  
        int zero = 0, one = 0, two = 0;  
  
        for(int i = 0; i < n; i++) {  
            cin >> w[i];  
  
            if(w[i] == 0) {  
                zero++;  
            } else if(w[i] == 1) {  
                one++;  
            } else {  
                two++;  
            }  
        }  
  
        int mn = min(one, two);  
  
        one -= mn;  
        two -= mn;  
  
        cout << zero + mn + (one / 3) + (two / 3) << '\n';  
    }  
  
    return 0;  
}