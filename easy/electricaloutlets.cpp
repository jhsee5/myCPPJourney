#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    ll TC, K, s, sum;
    cin >> TC; // N test cases

    for(ll i = 0; i < TC; ++i) {
        // first number on the line is K
        cin >> K;
        sum = 0;
        for(ll j = 0; j < K; ++j) {
            cin >> s;
            // get the numbers of holes in the socket
            sum +=s ;

        }

        cout << sum - K + 1 << '\n';
    }
    return 0;
}