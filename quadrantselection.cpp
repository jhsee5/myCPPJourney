#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    // quadrant 1
    if (x > 0 && y > 0) {
        cout << 1;
    }
    // quadrant 2
    else if (x < 0 && y > 0) {
        cout << 2;
    }
    // quadrant 3
    else if (x < 0 && y < 0) {
        cout << 3;
    }
    // quadrant 4
    else if (x > 0 && y < 0) {
        cout << 4;
    }
    return 0;
}
