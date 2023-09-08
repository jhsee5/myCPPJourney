#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    long long N;
    cin >> N;
    if(N % 2 == 0) {
        cout << "Bob";
    } else {
        cout << "Alice";
    }
    return 0;
}
