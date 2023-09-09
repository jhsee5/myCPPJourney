#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;
    long long counter = 1;
    while(counter <= N) {
        cout << counter << " " << "Abracadabra" << "\n";
        counter++;
    }
    return 0;
}
