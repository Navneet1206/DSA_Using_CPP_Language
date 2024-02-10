#include <iostream>
using namespace std;
int main()
{
    int n, i, j;

    cout << "Enter the number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int k = n; k >= i; k--)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << "\n";       
    }
    for (i = 1; i <= n; i++)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << " ";
            }

            for (j = n; j >= i; j--)
            {
                cout << " *";
            }
            cout << "\n";
        }
    return 0;
}