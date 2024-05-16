#include<iostream>
using namespace std;
int main()
{
    int a=34;
    cout<<sizeof(a)<<endl;

    char name;
    name='\0';
    cout<<sizeof(name)<<endl;

    int z;
    float x=int(z);
    x=87.343;
    cout<<"Value of b : "<<x<<endl;

    return 0;
}