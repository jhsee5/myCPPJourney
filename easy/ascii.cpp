#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Please enter a character:" << "\n";
    cin >> s;
    while(s.length() > 1) {
        cout << "Please enter only one character." << "\n";
        cout << "Please enter a character:" << "\n";
        cin >> s;
    }
    char c = s[0];
    cout << "The ascii value of " << c << " is " << int(c) << "\n";
    return 0;
}
