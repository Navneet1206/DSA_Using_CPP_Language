#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, q;
    cout << "Enter the number of elements: ";
    cin >> size;
    vector<int> arr(size);

    cout << "Enter Array Elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "Enter " << q << " queries:\n";
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;

        // Iterate through the array to check if the number is present
        bool found = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == query)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << query << " is present in the array." << endl;
        }
        else
        {
            cout << query << " is not present in the array." << endl;
        }
    }

    return 0;
}
