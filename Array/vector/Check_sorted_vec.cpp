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

    bool flag=false;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            flag=true;
            break;
        }
    }
    cout << (flag ? "Not sorted" : "Sorted or non-strictly increasing") << endl;

    return 0;
}