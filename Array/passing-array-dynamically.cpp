#include<iostream>
using namespace std;
void passedarray(int arr[], int size)
{
    for(int i =0; i< size; i++)
    {
        cout<<" "<<arr[i];   
    }

}
int main()
{
    int arr[]={100,11,112,334,5,32};;
    int size = sizeof(arr)/sizeof(arr[0]);
    passedarray(arr,size);
    return 0;
}