#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

// lets make a stopwatch
// credits to https://dev.to/paras594/create-stopwatch-with-c-46bp

void displayTime(int hours, int minutes, int seconds) {
    system("cls");
    cout << hours << ":" << minutes << ":" << seconds << "\n";
}
int main() {
    int hour = 0, min = 0, sec = 0;
    displayTime(hour, min, sec);
    for(;;) {
        Sleep(1000);
        sec++;

        if(sec > 59) {
            min++;
            sec = 0;
        }
        if(min > 59) {
            hour++;
            min = 0;
        }
        displayTime(hour, min, sec);
    }
    return 0;
}
