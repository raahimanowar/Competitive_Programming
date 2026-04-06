#include <bits/stdc++.h>
using namespace std;

int maximum(vector<int>& a) {
    int mx = *max_element(a.begin(), a.end());

    return mx;
}

int minimum(vector<int>& a) {
    int mn = *min_element(a.begin(), a.end());

    return mn;
}

int primeCount(vector<int>& a) {
    int count = 0;
    // int n;
    // if(n <= 1) return false;
    // if(n == 2) return true;
    // if(n % i == 0) return false;

    // for(int i = 3; i * i <= n; i += 2) {
    //     if(n % 2 == 0) return false;
    // }

    // return true;

    for(int n : a) {
        if(n <= 1) continue;

        bool isPrime = true;
        if(n == 2) {
            count++;
            continue;
        }
        if(n % 2 == 0) continue;

        for(int i = 3; i * i <= n; i += 2) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) count++;
    }

    return count;
 }

 int palindromeCount(vector<int>& a){
    int count = 0;

    for(int n : a) {
        string s = to_string(n);

        string rev = s;
        reverse(rev.begin(), rev.end());

        if(s == rev) count++;
    }

    return count;
 }

 int divisorCount(vector<int>& a) {
    int maxDiv = 0;
    int bestNum = 0;

    for(int i = 0; i < a.size(); i++) {
        int count = 0;

        for(int j = 1; j * j <= a[i]; j++) {
            if(a[i] % j == 0) {
                count++;
                
                if(j != a[i] / j) {
                    count++;
                }
            }
        }

        if(count > maxDiv) {
            maxDiv = count;
            bestNum = a[i];
        } else if(count == maxDiv) {
            bestNum = max(bestNum, a[i]);
        }
    }

    return bestNum;
 }

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int &i : a){
        cin >> i;
    }

    int maximumNum = maximum(a);
    int minimumNum = minimum(a);
    int totalPrimeNum = primeCount(a);
    int totalPalindromeNum = palindromeCount(a);
    int maxDivNum = divisorCount(a);

    cout << "The maximum number : " << maximumNum << endl;
    cout << "The minimum number : " << minimumNum << endl;
    cout << "The number of prime numbers : " << totalPrimeNum << endl;
    cout << "The number of palindrome numbers : " << totalPalindromeNum << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivNum << endl;

    return 0;
}