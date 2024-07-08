#include <iostream>
using namespace std;
int max_element(int *arr, int idx, int n)
{
    if (idx == n - 1)
    {
        // then only one element left therefore this is maximum
        return arr[idx];
    }
    return max(arr[idx], max_element(arr, idx + 1, n)); //max is prebuild function in cpp library know the maximum value
}
int main()
{
    int n = 5;
    int arr[] = {12, 13, 1020, 1, 212};
    max_element(arr, 0, n);
    cout << max_element(arr, 0, n);
    return 0;
}