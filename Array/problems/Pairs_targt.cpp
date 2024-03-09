#include <iostream>
using namespace std;
int main()
{
    int arr[5], pair = 0, target_sum = 7;

    cout << "Enter Array Elements : \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target_sum)
            {
                pair++;
            }
        }
    }
    cout << "Numbers of pairs " << pair;
    return 0;
}