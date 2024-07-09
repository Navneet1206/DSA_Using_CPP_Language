#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        // finding mid element in the unsorted
        int mid_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[mid_index])
            {
                mid_index = j;
            }
        }
        // pacing mid element at the beginning
        if (i != mid_index)
        {
            swap(v[i], v[mid_index]);
        }
    }

    return;
}

int main()
{
    int n;
    cout << "Enter the size of the container : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    selection_sort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}