#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int caseNumber = 1;
    
    while (getline(cin, line)) {
        if (line == "*") {
            break;
        }
        
        if (line.find("Hajj") != string::npos) {
            cout << "Case " << caseNumber << ": Hajj-e-Akbar" << endl;
        } else if (line.find("Umrah") != string::npos) {
            cout << "Case " << caseNumber << ": Hajj-e-Asghar" << endl;
        }
        
        caseNumber++;
    }
    
    return 0;
}