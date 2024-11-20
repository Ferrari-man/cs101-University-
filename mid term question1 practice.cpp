#include <iostream>
using namespace std;

int main()
{
    int NR;
    cin >> NR;

    int maxDays = 0;
    int longestRegion = 0;
    int region5Type3OnlyDays = 0;

    for (int i = 0; i < NR; i++)
    {
        int Days;
        cin >> Days;

        if (Days > maxDays)
        {
            maxDays = Days;
            longestRegion = i + 1;
        }

        for (int j = 0; j < Days; j++)
        {
            int type1, type2, type3;
            cin >> type1 >> type2 >> type3;

            if (i == 4 && type1 == 0 && type2 == 0 && type3 > 0)
            {
                region5Type3OnlyDays++;
            }
        }
    }

    cout << "Region " << longestRegion << " takes the longest period of harvesting with " << maxDays << " days." << endl;
    if (NR >= 5)
    {
        cout << "Region 5 harvests sponge from type 3 only for " << region5Type3OnlyDays << " days." << endl;
    }

    return 0;
}
