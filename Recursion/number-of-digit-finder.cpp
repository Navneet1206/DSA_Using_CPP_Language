#include <iostream>
using namespace std;

int countDigits(int num)
{
    if (num == 0)
        return 0;

    return 1 + countDigits(num / 10);
}

int main()
{
    int number, result;
    cout << "Enter the number: ";
    cin >> number;

    result = countDigits(number);
    cout << "Number of digits: " << result;

    return 0;
}
