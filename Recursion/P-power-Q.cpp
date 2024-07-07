#include<iostream>
using namespace std;
int p_power_q(int p, int q)
{
    if(q==0)
    {
        return 1;
    }
        return p_power_q(p,q-1)*p;
}
int main()
{
    int num1,num2;
    cout<<"Enter the number : ";
    cin>>num1;
    cout<<"Enter the power of the number : ";
    cin>>num2;
    
    p_power_q(num1,num2);
    cout<<"Answer of the "<<num1 <<" raised to the power "<<num2 <<" is : "<< p_power_q(num1,num2);
    return 0;
}