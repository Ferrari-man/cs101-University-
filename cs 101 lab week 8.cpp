#include<iostream>
using namespace std;

int main()
{
	float rating[5],sum ;
	float avarage;
	int count = 0;
	sum = 0.0;

	for (int i = 0; i < 5; i++) {
		cin >> rating[i];
	}

	for (int i = 0; i < 5; i++) {
		sum += rating[i];
		if (rating[i] > 4.0) {
			count++;
		}

	}

	 avarage = sum / 5;
	 cout << "the avarage is:" << avarage << endl;
	 cout << "number of movies above 4 is:" << count;
	return 0;
}
