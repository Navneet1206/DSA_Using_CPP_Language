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


    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            sum = sum + v[i];
        }
        else
        {
            sum = sum - v[i];
        }
    }

    cout << "Sum of even elements minus sum of odd elements: " << sum << endl;
    return 0;
}