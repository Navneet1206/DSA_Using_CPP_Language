/*?Documentation left?*/

#include <iostream>
using namespace std;
int arr[100], rear = -1, size = sizeof(arr) / sizeof(arr[0]);
int push()
{
    int data;
    cout << "Enter the new element : ";
    cin >> data;

    if (rear >= size - 1)
    {
        cout << "Stack is overflow\n";
        return 1;
    }
    else
    {
        rear++;
        arr[rear] = data;
        return arr[rear];
        retun 0;
    }
}
int pop()
{
    if (rear == -1)
    {
        cout << "Stack is underflow";
        return -1;
    }
    else
    {
        rear--;
        cout << "Stack element is deleted sucessfully " << endl;
        return 0;
    }
}
int display()
{
    if (rear == size || rear == -1)
    {
        cout << "Stack is overflow or under flow";
        return -1;
    }
    else
    {
        for (int i = 0; i <= rear; i++)
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