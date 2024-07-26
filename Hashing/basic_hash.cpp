#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Initiallization of the array with zero value
    int n, fun = 0;                               // fun is used to get functional value
    cout << "enter the values from 1-10 : ";
    cin >> n;
    cout << "enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        int x = NULL;
        cin >> x;
        fun = x % 10; // hasing function is used where it take the element as the mod of 10
        arr[fun] = x; // here the mod of 10 value is consider as the index of the keys
    }
    cout << endl
         << "Inserted elements\n"; // printing the inserted elements how these are stored
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "enter the target number : ";
    cin >> target; // Taking the target number from the user

    fun = 0;                // intiallizing the function with zero for prevent irregularity
    fun = target % 10;      // Again hash function operation is used
    if (arr[fun] == target) // Checking the condition if target is equal to the index solved by hash function
    {
        cout << "Element is present in the index of : " << fun << endl;
    }
    else // if not them it not inserted
    {
        cout << "Element is not inserted";
    }

    return 0;
}