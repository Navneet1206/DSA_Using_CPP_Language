/*"Given an integer , move all 0s to the end of
 it while maintaining the relative order of the non-zero elements"

    input : [0 5 0 3 42]

    output: [5 3 42 0 0]



#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int> &v)
{
    int n = v.size();
    int nonZeroIndex = 0;

    // Move all non-zero elements to the beginning of the array
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[nonZeroIndex++] = v[i];
        }
    }

    // Fill the remaining elements with zeros
    while (nonZeroIndex < n)
    {
        v[nonZeroIndex++] = 0;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the container: ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    moveZerosToEnd(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


*/


#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] == 0)
            {
                if(v[j+1]>v[j])
                swap(v[j] ,v[j+1] );
            }
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

    bubble_sort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}