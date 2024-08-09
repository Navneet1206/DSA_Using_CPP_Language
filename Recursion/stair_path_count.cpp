#include <iostream>
using namespace std;
int stairs(int n)
{
    if (n == 1 || n == 2)
        return n;
    int numberofways = stairs(n - 1) + stairs(n - 2);
    return numberofways;
}
int main()
{
    int n;
    cout << "Enter the number of Strairs : ";
    cin >> n;
    int ways = stairs(n);
    cout << " Number of ways are : " << ways;
    return 0;
}