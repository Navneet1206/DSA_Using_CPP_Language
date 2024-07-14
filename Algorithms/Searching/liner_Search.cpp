#include<iostream>
#include <vector>
    using namespace std;
int main()
{
    int size, target;

    cout << "Enter the target element : ";
    cin >> target;

    cout << "Enter the size of the container : ";
    cin >> size;
    vector<int> v(size);
    cout << "Enter the element of the container : ";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    // cout << "";
    for (int i = 0; i < size; i++)
    {
        if (v[i] == target)
        {
            cout << "Target found in index number : " << i << endl;
            exit(0);
        }
    }

    cout << "element not found ";

    return 0;
}