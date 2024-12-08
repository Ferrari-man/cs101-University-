#include<iostream>
using namespace std;

void main()
{
	int array[30];
	int sum = 0;
	int avarage = 0;
	int count = 0;
	int avarage2 = 0;
	int sum2 = 0;

	for (int i = 0; i < 30; i++) {
		cin >> array[i];
		sum = sum + array[i];
	}
	avarage = sum / 30;
	for (int i = 0; i < 30; i++) {
		if (array[i]>100 && array[i]%2==0) {
			cout << "even number greater than 100: " << array[i] << endl;
		}
	}
	for (int i = 0; i < 30; i++) {
		if (array[i] > avarage) {
			cout << "number greater than avarage: " << array[i] << endl;
			sum2 = sum2 + array[i];
			avarage2 = sum2 / 30;

		}
	}
	cout << "avarage numbers greater than avaraage: " << avarage2 << endl;

}
