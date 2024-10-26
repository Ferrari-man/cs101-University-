#include<iostream>
using namespace std;

void main() {
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << "\nSum: " << sum << endl; 
}
