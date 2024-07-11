#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;                  // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap elements at i and j
        }
    }
    swap(arr[i + 1], arr[high]); // Swap pivot element with element at i + 1
    return (i + 1);              // Return the partition index
}

// Function to implement Quick Sort
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Function to print an array
void print_array(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    print_array(arr);

    quick_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    print_array(arr);

    return 0;
}
