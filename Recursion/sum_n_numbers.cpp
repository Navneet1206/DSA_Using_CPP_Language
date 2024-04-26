#include<iostream>
using namespace std;
int nsum(int n)
{
       
    if(n==0)
    return 0;
    else
    return n+nsum(n-1);
}
int main()
{
    int sum,num;
    cout << "Enter any number : ";
    cin >> num;
    sum = nsum(num);
    cout << "Sum of 1 to n  number is : " << sum;
    return 0;
}