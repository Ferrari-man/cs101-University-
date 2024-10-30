#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
    cout << "Enter a number (up to 4 digits): ";
    cin >> number;

    int originalNumber = number; // Store the original number for output

    if (number < 10 && number > -10) {
        reversedNumber = number;
    } else if (number < 100 && number > -100) {
        reversedNumber = (number % 10) * 10 + (number / 10);
    } else if (number < 1000 && number > -1000) {
        reversedNumber = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
    } else if (number < 10000 && number > -10000) {
        reversedNumber = (number % 10) * 1000 + ((number / 10) % 10) * 100 + ((number / 100) % 10) * 10 + (number / 1000);
    } else {
        cout << "Number is too large to reverse using this method." << endl;
        return 1;
    }

    cout << "The reversed number of " << originalNumber << " is " << reversedNumber << "." << endl;

    return 0;
}
