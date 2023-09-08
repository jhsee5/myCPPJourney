#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long N;
    string word;
    string wordArr[11];
    cin >> N;
    for(long long i = 1; i <= N; ++i) {
        cin >> word;
        wordArr[i] = word;
    }
    for(long long i = 1; i <= N; ++i) {
        if (!(i % 2 == 0)) {
            cout << wordArr[i] << "\n";
        }
    }
    return 0;
}
