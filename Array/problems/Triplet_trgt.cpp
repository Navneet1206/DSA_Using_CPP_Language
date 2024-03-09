#include <iostream>
using namespace std;
int main()
{
    int arr[5], Triplet = 0, target_sum = 7;

    cout << "Enter Array Elements : \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for(int k=j+1;k<5;k++)
            {
                if (arr[i] + arr[j] + arr[k] == target_sum)
                {
                    Triplet++;
                }
            }
        }
    }
    cout << "Numbers of Triplets " << Triplet;
    return 0;
}