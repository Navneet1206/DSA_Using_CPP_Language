/*?Documentation left?*/
/*?fully Incomplete copy from simple queue?*/
#include <iostream>
using namespace std;
int arr[100], size = sizeof(arr) / sizeof(arr[0]), front = -1, rear = -1;
int enqueue()
{
    int data;
    cout << "Enter the data : ";
    cin >> data;
    if (rear >= size - 1)
    {
        cout << "Queue is overflow\n";
        return -1;
    }
    if (front == -1)
    {
        front = 0; // Initialize front to 0 when first element is inserted
    }
    arr[++rear] = data;
    return 0;
}
int dequeue()
{
    if (rear == -1 || front > rear)
    {
        cout << "queue is underflow\n";
        return -1;
    }

    arr[++front];
    cout << "Queue element deleted succesfully"
         << front << " index\n";
    return 0;
}
int display()
{
    if (rear == -1 || front > rear || rear >= size - 1)
    {
        cout << "Queue is overflow or Underflow";
        return -1;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "\n1.for instion in the queue : \n";
        cout << "2.for deletion in the queue : \n";
        cout << "3.for display :\n";
        cout << "4.to Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "You Entered wrong input! please try again";
            break;
        }
    }
    return 0;
}