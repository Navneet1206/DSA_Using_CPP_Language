#include<iostream>
using namespace std;
int arr[100],size=sizeof(arr)/sizeof(arr[0]),front=-1,rare=-1;
int enqueue()
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

}
int dequeue()
{

}
void display()
{

}
int main()
{
    int choice;

    cout<<"1.for instion in the queue : \n";
    cout<<"2.for deletion in t he queue : \n";
    cout<<"3.for display :\n";
    cout<<"4.to Exit\n";
    cout<<"Enter your choice : "
    cin>>choice;
    switch(choice)
    {
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: cout<<"You Entered wrong input! please try again";
        break;

    }
    return 0;
}