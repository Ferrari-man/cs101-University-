#include <iostream>
using namespace std;

int main() {
    int numPeople, sal, rent, carpayment;
    int count = 0;

    cout << "Enter the number of people: ";
    cin >> numPeople;

    for (int i = 0; i < numPeople; ++i) {
        cout << "Enter salary for person " << i + 1 << ": ";
        cin >> sal;
        cout << "Enter rent for person " << i + 1 << ": ";
        cin >> rent;
        cout << "Enter car payment for person " << i + 1 << ": ";
        cin >> carpayment;

        int totalPayments = rent + carpayment;
        if (sal >= 2 * totalPayments) {
            ++count;
        }
    }

    cout << "Number of people with salary covering double their payments: " << count << endl;

    return 0;
}
