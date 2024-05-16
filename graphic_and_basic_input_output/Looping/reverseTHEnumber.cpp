#include<iostream>
using namespace std;
int main()
{
    int i,n,x,rev=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n;i!=0;i/=10)
    {
        x=i%10;
        rev=rev*10+x;

    }

    cout<<"Reverse of the digit of the number "<<n<<" is "<<rev<<endl;

    return 0;
}