#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "Enter the series : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += 1;
        }
    }
    cout << "Sum of the series till " << n << " is" << sum << endl;
    return 0;
}