/*Print the index of the student marks arrays whose number less than 35*/


#include<iostream>
using namespace std;
int main()
{
    int i,marks[10]={25,45,66,44,32,56,88,93,22,67};
    for(i=0;i<10;i++)
    {
        if(marks[i]<35)
        cout <<i<<" = "<<marks[i] <<"\n";
    }
    return 0;
}