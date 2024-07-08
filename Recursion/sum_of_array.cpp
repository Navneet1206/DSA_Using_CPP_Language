#include <iostream>
using namespace std;
int sum_element(int *arr, int idx, int n)
{
    if (idx >= n) // Base case: if index is out of bounds
    {
        return 0;
    }

    // Add the current element and move to the next element
    return arr[idx] + sum_element(arr, idx + 1, n);
}
int main()
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int ans;
    ans = sum_element(arr, 0, size);
    cout<<"Answer is : "<<ans;
    return 0;
}