//Experimental Analysis


#include <iostream>
using namespace std;


//time complexity for this algorithm is O(n)
int alogrithm_using_loop(int num1, int num2)
{
    int result = 0;
    for (int i = num1; i <= num2; i++)  
    {
        result += i;
    }
    return result;
}

//time complexity for this algorithm is O(1)
int algorithm_using_formula(int num1, int num2)
{
    int n = (num2 - num1 + 1);
    int a = num1;

    int result = (n / 2)*(2 * a + (n - 1) * 1);
    return result;
}
int main()
{
    int x, y, answer;
    cout << "Enter the x : ";
    cin >> x;
    cout << "Enter the y greater than x : ";
    cin >> y;

    answer = alogrithm_using_loop(x, y);
    cout << "\nResult alogrithm_using_loop : " << answer;

    answer = 0;
    answer = algorithm_using_formula(x, y);
    cout << "\nResult algorithm_using_formula :  " << answer;
    return 0;
}