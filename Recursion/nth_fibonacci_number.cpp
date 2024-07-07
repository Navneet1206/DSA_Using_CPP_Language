#include<iostream>
using namespace std;
int nth_fubonacci(int n)
{
    if(n==1||n==0)
    {
        return n;
    }
        return (nth_fubonacci(n-1)+nth_fubonacci(n-2));
}

int main()
{
    int range;
    cout<<"Enter the nth number : ";
    cin>>range;
    nth_fubonacci(range);
    cout<<"\nThe nth fibonacci number is : " << nth_fubonacci(range); 
}