/*?Working in it?*/

#include <iostream>
using namespace std;
int arr[100], rare = -1, size = sizeof(arr) / sizeof(arr[0]);
int push()
{
    int data;
    cout << "Enter the new element : ";
    cin >> data;

    if (rare >= size - 1)
    {
        cout << "Stack is overflow\n";
        return 1;
    }
    else
    {
        rare++;
        arr[rare] = data;
        return arr[rare];
        retun 0;
    }
}
int pop()
{
    if (rare == -1)
    {
        cout << "Stack is underflow";
        return -1;
    }
    else
    {
        rare--;
        cout << "Stack element is deleted sucessfully " << endl;
        return 0;
    }
}
int display()
{
    if (rare == size || rare == -1)
    {
        cout << "Stack is overflow or under flow";
        return -1;
    }
    else
    {
        for (int i = 0; i <= rare; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    }
    
}
int main()
{

    int choice;

    while (1)
    {
        cout << "\n1.for push operation : \n";
        cout << "2.for pop operation : \n";
        cout << "3.for display operation : \n";
        cout << "4.for exit  : \n";
        cout << "\nEnter you choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default: cout<<"You Entered wrong input! Please try again";
            break;
        }
    }
    return 0;
}