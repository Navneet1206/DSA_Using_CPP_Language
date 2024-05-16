#include<iostream>
using namespace std;
int main()
{
    int power=1,i,n,x;
    cout <<"Enter the number : ";
    cin >>n;
    cout <<"Enter the raised power : ";
    cin >>x;
    for(i=1;i<=x;i++)
    {
        power=n*power;
    }

    cout <<n<<" raised to power "<<x << " is "<<power<<endl ;

    return 0;
}