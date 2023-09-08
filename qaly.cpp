#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    double q, y, ans;
    for(long long i = 0; i < t; ++i) {
        cin >> q >> y;
        ans += q * y;
    }
    cout << ans;
    return 0;
}
