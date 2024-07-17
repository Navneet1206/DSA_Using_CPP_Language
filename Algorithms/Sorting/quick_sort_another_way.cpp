/*
Time Complexity:

Best Case: O(nlogn)
Average Case:O(nlogn)
Worst Case:O(n^2)

Space Complexity:

Average Case:O(logn)
Worst Case:O(n)

*/
#include <iostream>
#include <vector>
using namespace std;
int partion(vector<int> &v, int first, int last)
{
    int pivot = v[last];
    int i = first - 1;   //insert elements less than pivot at the beginnig
    int j = first;      // find the elements less than pivot

    for (; j < last; j++)
    {
        // if any element is less than the pivot then place it in the left of the pivot number
        if (v[j] < pivot)  
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[last]);  //Placing the pivot at right position

    return (i + 1); 
}
void quicksort(vector<int> &v, int first, int last)
{
    // base case for recursion
    if (first >= last)
        return;

    // make a pivot element  by using the partion thm
    int pi = partion(v, first, last);
    // recursive code
    quicksort(v, first, pi - 1);
    quicksort(v, pi + 1, last);
}
int main()
{
    int n;
    cout << "Enter the size of the container  : ";
    cin >> n;
    vector<int> v(n);
    
    cout << "enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    quicksort(v, 0, n-1);

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}