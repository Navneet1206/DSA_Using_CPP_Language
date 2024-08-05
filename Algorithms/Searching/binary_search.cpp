#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort for the Sorting Array because Binary Search needed Sorted array for Searching
void bubble_sort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int binary_search(const vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (v[mid] == target)
        {
            return mid; // target found
        }
        else if (v[mid] < target)
        {
            left = mid + 1; // search the right half
        }
        else
        {
            right = mid - 1; // search the left half
        }
    }

    return -1; // target not found
}

int main()
{
    int n, target;

    cout << "Enter the target element: ";
    cin >> target;
    cout << "Enter the size of the container: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bubble_sort(v);
    cout << "Sorted array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int result = binary_search(v, target);
    if (result != -1)
    {
        cout << "Element found at index " << result <<" in the sorted array"<< endl;
    }
    else
    {
        cout << "Element not found in array" << endl;
    }

    return 0;
}
