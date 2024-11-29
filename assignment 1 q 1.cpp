#include <iostream>
using namespace std;

int main() {
    int array[50];

    cout << "Enter 50 values:" << endl;
    for (int i = 0; i < 50; i++) {
        cin >> array[i];
    }

    cout << "Subsets of 2 elements are:" << endl;
    for (int i = 0; i < 50; i++) {
        for (int j = i + 1; j < 50; j++) {
            cout << array[i] << ", " << array[j] << endl;
        }
    }

    return 0;
}
