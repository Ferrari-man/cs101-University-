#include <iostream>
using namespace std;

int main()
{
	float rating[5];
	float price[5];
	float total = 0;
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> rating[i];

	}
	for (int i = 0; i < 5; i++)
	{
		cin >> price[i];
	}
	cout << "The prices of the products with a rating of 4.0 or higher are: ";
	for (int i = 0; i < 5; i++)
	{
		if (rating[i] > 4.0)
		{
			cout << rating[i] << " ";
			total += price[i];
			
		}
	}

	cout << "\nThe total price of the products with a rating of 4.0 or higher is: " << total << endl;
	








	return 0;
}
