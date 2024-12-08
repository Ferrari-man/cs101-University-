#include <iostream>
using namespace std;

int main() {
    int Y[10];
    int firstNegative = -1, secondNegative = -1;
    
    for(int i=0 ; i< 10 ; i++){
        cin>> Y[i];
    }

    
    for (int i = 0; i < 10; i++) {
        if (Y[i] < 0) {
            if (firstNegative == -1)
                firstNegative = i;
            else {
                secondNegative = i;
                break;
            }
        }
    }

    
    int sum = 0, count = 0;
    for (int i = firstNegative + 1; i < secondNegative; i++) {
        sum += Y[i];
        count++;
    }

    int average = count > 0 ? sum / count : 0;

    
    for (int i = firstNegative + 1; i < secondNegative; i++) {
        if (Y[i] % 2 != 0)
            Y[i] += average;
    }
    
    cout << "Y after modification: ";
    for (int i = 0; i < 10; i++) {
        cout << Y[i] << " ";
    }
    cout << endl;

    return 0;
}
