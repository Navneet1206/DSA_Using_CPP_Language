#include<iostream>
using namespace std;
int main()
{
    int greater;
    int num1,num2;
    cout<< "Enter the number 1 : ";
    cin>>num1;
    cout<< "Enter the number 2 : ";
    cin>>num2;

    greater =(num1>num2)?num1:num2;
    cout << greater << " number is greater";
    return 0;
}