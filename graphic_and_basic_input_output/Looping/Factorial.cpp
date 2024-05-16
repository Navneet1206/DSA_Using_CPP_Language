#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<<"Enter the number : ";
    cin>>n;

    while(i<=n)
    {
        fact*=i;
        i++;
        cout << "Facorial of the number "<<i-1<<" is "<<fact<<endl;
    }

    return 0;
}