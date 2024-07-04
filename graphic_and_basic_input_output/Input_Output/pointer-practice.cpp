#include<iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a =19;
    int b=91;
    cout<<"\nBefore swapping \na : "<<a<<" b : "<<b;
    swap(&a,&b);
    cout<<"\nAfter swapping \na : "<<a<<" b : "<<b;
}