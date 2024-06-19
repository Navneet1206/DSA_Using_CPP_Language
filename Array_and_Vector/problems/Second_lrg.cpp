#include <iostream>
using namespace std;

int main() 
{
    int size;
	cout << "Enter the number of elements: ";
	cin >> size;
    int arr[size];

    cout << "Enter Array Elements : \n";

    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int secondLargest = -1;
    for (int i = size - 2; i >= 0; --i) 
    {
        if (arr[i] < arr[size - 1]) 
        {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest != -1)
        cout << "\nSecond largest element : " << secondLargest;
    else
        cout << "\nNo second largest element found.";

    return 0;
}
