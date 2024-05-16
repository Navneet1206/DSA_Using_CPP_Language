#include<iostream>
using namespace std;
int main()
{
    int i,n,x,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n;i!=0;i/=10)
    {
        x=i%10;
        sum+=x;

    }

    cout<<"Sum of the digit of the number "<<n<<" is "<<sum<<endl;

    return 0;
}