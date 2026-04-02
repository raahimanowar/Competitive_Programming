#include <bits/stdc++.h>

using namespace std;

int doSum(int a, int b) {
    int sum = 0;

    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++){
        sum += i;
    }

    return sum;
}

int doSumEven(int a, int b) {
    int sumEven = 0;

     if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++){
        if(i % 2 == 0){
            sumEven += i;
        }
    }

    return sumEven;
}

int doSumOdd(int a, int b) {
    int sumOdd = 0;

     if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++){
        if(i % 2 != 0){
            sumOdd += i;
        }
    }

    return sumOdd;
}

int main() {
    int A, B, sum, sumEven, sumOdd;

    cin >> A >> B;

    sum = doSum(A, B);
    sumEven = doSumEven(A, B);
    sumOdd = doSumOdd(A, B);

    cout << sum << endl << sumEven << endl << sumOdd << endl;

    return 0;
}
