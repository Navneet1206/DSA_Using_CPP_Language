#include <iostream>
using namespace std;

int main()
{
    int size, k;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size], a[size];

    cout << "Enter the number of steps you want to rotate: ";
    cin >> k;

    k = k % size; // To handle cases where k is greater than size of array.
    // Input array elements
    cout << "Enter Array Elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Copy the last k elements to rotated array 'a'
    int j = 0;
    for (int i = size - k; i < size; ++i)
    {
        a[j++] = arr[i];
    }

    // Copy the first (size - k) elements to rotated array 'a'
    for (int i = 0; i < size - k; i++)
    {
        a[j++] = arr[i];
    }

    // Print the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
//Using reverse function 

#include <iostream>
#include <algorithm> // for std::reverse
using namespace std;

int main() {
    int size, k;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];

    cout << "Enter the number of steps you want to rotate: ";
    cin >> k;

    k = k % size; // To handle cases where k is greater than size of array.
    
    // Input array elements
    cout << "Enter Array Elements : \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Rotate the array using std::reverse
    reverse(arr, arr + size); // Reverse the entire array
    reverse(arr, arr + k);    // Reverse the first k elements
    reverse(arr + k, arr + size); // Reverse the rest of the elements

    // Print the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/