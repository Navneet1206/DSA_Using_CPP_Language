#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);

    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; ++i)
    {
        cin >> v[i];
    }

    cout << "Enter x element : ";
    int x;
    cin >> x;

    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }
    cout << "Number of greater " << x << " is : " << count << endl;

    return 0;
}