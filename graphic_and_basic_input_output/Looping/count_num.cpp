#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0 ;
    for ( i = n; i != 0; i/=10)
    {
        count++;
    }
    
    cout<<"Number having "<<count<<" digits"<<endl;
    return 0;
}