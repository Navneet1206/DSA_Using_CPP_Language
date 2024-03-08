/*Find the maximum element of the array*/


#include<iostream>
using namespace std;
int main()
{
    int i,max=-1,arr[10]={25,45,66,44,32,56,88,93,22,67};
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }

    cout << "Maximum = "<< max;

    return 0;
}