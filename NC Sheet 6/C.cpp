#include <bits/stdc++.h>

using namespace std;

long long doSum(long long a, long long b) {
    if(a > b){
        long long temp = a;
        a = b;
        b = temp;
    }

    long long sum = ((b - a + 1) * (a + b)) / 2;

    return sum;
}

long long doSumEven(long long a, long long b) {
     if(a > b){
        long long temp = a;
        a = b;
        b = temp;
    }

    if(a % 2 != 0){
        a += 1;
    }
    if(b % 2 != 0){
        b -= 1;
    }

    long long n = ((b - a) / 2) + 1;

    long long sumEven = ((a + b) * n) / 2;

    return sumEven;
}

long long doSumOdd(long long a, long long b) {
    if(a > b){
        long long temp = a;
        a = b;
        b = temp;
    }

    if(a % 2 == 0){
        a += 1;
    }
    if(b % 2 == 0){
        b -= 1;
    }

    long long n = ((b - a) / 2) + 1;

    long long sumOdd = ((a + b) * n) / 2;

    return sumOdd;
}

int main() {
    long long A, B, sum, sumEven, sumOdd;

    cin >> A >> B;

    sum = doSum(A, B);
    sumEven = doSumEven(A, B);
    sumOdd = doSumOdd(A, B);

    cout << sum << endl << sumEven << endl << sumOdd << endl;

    return 0;
}
