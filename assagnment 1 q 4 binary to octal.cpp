#include<iostream>
using namespace std;

int main() {
    int array[20];
    int decimal = 0, octal = 0, base = 1;

 
    for (int i = 0; i < 20; i++) {
        cin >> array[i];
    }

    for (int i = 19; i >= 0; i--) {
        decimal = decimal + array[i] * base;
        base = base * 2;
    }

    base = 1;
    for (; decimal > 0; decimal = decimal / 8) {
        octal = octal + (decimal % 8) * base;
        base = base * 10;
    }

    return 0;
}
