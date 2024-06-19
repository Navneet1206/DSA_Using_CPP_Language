#include <iostream>
using namespace std;
class short_0_1
{
public:
    int sorting_0_1(int size)
    {
        int count_zero = 0;
        int i, arr[size];

        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < size; i++)
        {
            if (arr[i] == 0)
                count_zero++;
        }

        cout << "number of zero " << count_zero << endl;

        for (i = 0; i < size; i++)
        {
            if (i < count_zero)
            {
                arr[i] = 0;
            }
            else
            {
                arr[i] = 1;
            }
        }

        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
};
int main()
{
    short_0_1 obj;
    int n = 10;
    cout << "Enter the elements : \n";
    obj.sorting_0_1(n);

    return 0;
}