#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int array[SIZE];

    // Read the array values
    cout << "Enter 50 values: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> array[i];
    }

    // Bubble sort to reorder from smallest to largest
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
