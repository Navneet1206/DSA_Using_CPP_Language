#include<iostream>
using namespace std;
void print_array(int *arr, int idx, int n)
{
    if(idx == n) return;

    cout<<arr[idx]<<"\n";
    print_array(arr, idx+1,n);
}
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    print_array(arr,0,n);
    return 0;
}