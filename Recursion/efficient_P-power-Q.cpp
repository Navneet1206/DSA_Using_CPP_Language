#include <iostream>
using namespace std;
int p_power_q(int p, int q)
{
    int result;
    if (q == 0)
    {
        return 1;
    }
    if (q % 2 == 0)
    {
        // if q is even
        result = p_power_q(p, q / 2);
        return result * result;
    }
    else
    {
        // if q is odd
        result = p_power_q(p, (q - 1) / 2);
        return p * (result * result);
    }
}
int main()
{
    int num1, num2;
    cout << "Enter the number : ";
    cin >> num1;
    cout << "Enter the power of the number : ";
    cin >> num2;

    p_power_q(num1, num2);
    cout << "Answer of the " << num1 << " raised to the power " << num2 << " is : " << p_power_q(num1, num2);
    return 0;
}