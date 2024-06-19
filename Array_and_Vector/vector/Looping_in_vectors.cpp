#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int element;
    cout << "Enter the number of elements you want : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.insert(v.begin()+3, 12); // Insert an element at a specific position in the array

    for (int ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;
    
    v.erase(v.end()-2);
    int index = 0;
    while (index < v.size())
    {
        cout << v[index++] << " ";
    }

    return 0;
}