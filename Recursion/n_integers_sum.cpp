#include<iostream>
using namespace std;
int nth_sum_integer(int num)
{
    if(num>=0&&num<=9)
    {
        return num;
    }
    return ((num%10)+nth_sum_integer(num/10));
}
int main()
{
    int number;
    cout<<"Enter an nth integer number : ";
    cin>>number;
    nth_sum_integer(number);
    cout<<"Sum of the integers is : "<<nth_sum_integer(number)<<endl;
    return 0;
}