#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter the current year : ";
    cin >> n;

    cout << "Enter your birth year : ";
    cin >> x;

    cout << "Your present age  : " << n - x;

    return 0;
}