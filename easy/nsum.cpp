#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    long long N, num, ans = 0;
    cin >> N;
    for(long long i = 0; i < N; i++) {
        cin >> num;
        ans += num;
    }
    cout << ans;
    return 0;
}
