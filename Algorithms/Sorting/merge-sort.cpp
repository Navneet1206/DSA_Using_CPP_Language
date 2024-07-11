#include <iostream>
#include <vector>
using namespace std;

void merge_sort(const vector<int> &v1, const vector<int> &v2, vector<int> &v3)
{
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            v3[k++] = v1[i++];
        }
        else
        {
            v3[k++] = v2[j++];
        }
    }

    while (i < n1)
    {
        v3[k++] = v1[i++];
    }

    while (j < n2)
    {
        v3[k++] = v2[j++];
    }
}

int main()
{
    int n1, n2;

    cout << "Enter the size of the first container: ";
    cin >> n1;

    vector<int> v1(n1);
    cout << "Enter the sorted elements in the first container: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }

    cout << "Enter the size of the second container: ";
    cin >> n2;

    vector<int> v2(n2);
    cout << "Enter the sorted elements in the second container: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(n1 + n2);
    merge_sort(v1, v2, v3);

    cout << "\nThis is the merged sorted array:\n";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
