#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    for(long long i = 0; i < 3; ++i) {
        if(i < 2) {
            cout << word << " ";
        } else {
            cout << word;
        }
    }
    return 0;
}
