#include <iostream>
using namespace std;
int factorial(int fact)
{
    if (fact == 0)
    {
        return 1;
    }
    else
    {
        return (fact * factorial(fact - 1));
    }
}
int main()
{
    int num, result;
    cout << "Enter the number : ";
    cin >> num;
    result = factorial(num);
    cout << "Factorial : " << result;
    return 0;
}