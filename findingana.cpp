#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    while(s[0] != 'a') {
        s = s.substr(1);
    }
    cout << s;
    return 0;
}
