#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    bool first = true;
    
    while (getline(cin, line)) {
        if (!first) {
            cout << endl;
        }
        first = false;
        
        int freq[256] = {0};
        
        for (char c : line) {
            if (c >= 32 && c <= 128) {
                freq[c]++;
            }
        }
        
        for (int f = 1; f <= 1000; f++) {
            for (int i = 128; i >= 32; i--) {
                if (freq[i] == f) {
                    cout << i << " " << f << endl;
                }
            }
        }
    }
    
    return 0;
}