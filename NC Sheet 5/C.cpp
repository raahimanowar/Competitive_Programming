#include <bits/stdc++.h>

using namespace std;

bool isOdd(int n){
      bool isOdd = false;
      if(n % 2 != 0){
            isOdd = true;
      }

      return isOdd;
}

bool isPalindrome(int n){
      string s = "";

      while(n > 0){
            s = char('0' + (n % 2)) + s;
            n /= 2;
      }

      int left = 0;
      int right = s.length() - 1;

      while(left < right){
            if(s[left] != s[right]){
                  return false;
            }
            left++;
            right--;
      }
            return true;
}

int main(){
      int N;

      cin >> N;

      if(isOdd(N) && isPalindrome(N)){
            cout << "YES" << endl;
      } else {
            cout << "NO" << endl;
      }

      return 0;
}
