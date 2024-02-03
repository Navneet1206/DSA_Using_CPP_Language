#include<iostream>
using namespace std;
int main()
{
    int  i,j,n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||j==1||j==n)
                cout<<"*";
        else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}