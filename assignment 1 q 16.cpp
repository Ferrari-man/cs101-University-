#include<iostream>
using namespace std;

void main() {
	int array[30];
	int avarage = 0;
	int sum = 0;
	for (int i = 0;i < 30;i++) 
	{
		cin >> array[i];
		sum = sum + array[i];
	}
	avarage = sum / 30;
	cout << "Avarage is: " << avarage << endl;

	for (int i = 0;i < 30;i++)
	{
		if (array[i] > avarage)
		{
			array[i] = array[i]+5;
		}
	}
