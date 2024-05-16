#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cout << "Enter the number of rows and column : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==n||j==1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}