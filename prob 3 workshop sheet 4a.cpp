#include <iostream>
using namespace std;

int main() {
    int prices[5000];
    int transitCities[5000];
    int departureMonths[5000];
    int minPriceInMarch = 99999999;
    int noTransitCount = 0;

    for (int i = 0; i < 5000; i++) {
        cout << "Enter price for flight " << i + 1 << ": ";
        cin >> prices[i];
        cout << "Enter number of transit cities for flight " << i + 1 << ": ";
        cin >> transitCities[i];
        cout << "Enter departure month for flight " << i + 1 << ": ";
        cin >> departureMonths[i];

        if (departureMonths[i] == 3 && prices[i] < minPriceInMarch) {
            minPriceInMarch = prices[i];
        }

        if (transitCities[i] == 0) {
            noTransitCount++;
        }
    }

    if (minPriceInMarch == 99999999) {
        cout << "No flights available in March." << endl;
    } else {
        cout << "Cheapest flight in March costs: " << minPriceInMarch << endl;
    }
    cout << "Number of flights with no transit cities: " << noTransitCount << endl;

    return 0;
}
