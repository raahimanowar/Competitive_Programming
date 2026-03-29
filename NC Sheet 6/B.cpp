#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long N){
    if(N <= 1){
        return false;
    }

    for(long long i = 2; i <= N / i; i++){
        if(N % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long N;

    cin >> N;

    if(isPrime(N)){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
