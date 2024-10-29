#include <iostream>
#include <limits>
using namespace std;

int main() {
    int weight, height;
    int minWeight = 999999;
    int idealCount = 0;
    int totalExceedWeight = 0;
    int exceedCount = 0;

    for (int i = 0; i < 2; i++) {
        cout << "Enter weight for person " << i + 1 << ": ";
        cin >> weight;
        cout << "Enter height for person " << i + 1 << ": ";
        cin >> height;

        int idealWeight = height - 110;

        if (weight < minWeight) {
            minWeight = weight;
        }

        if (weight <= idealWeight) {
            idealCount++;
        } else {
            totalExceedWeight += weight;
            exceedCount++;
        }
    }

    double averageExceedWeight = (exceedCount > 0) ? static_cast<double>(totalExceedWeight) / exceedCount : 0;

    cout << "Minimum weight is " << minWeight << endl;
    cout << "Number of persons with ideal weight: " << idealCount << endl;
    cout << "Average weight of persons exceeding ideal weight: " << averageExceedWeight << endl;

    return 0;
}
