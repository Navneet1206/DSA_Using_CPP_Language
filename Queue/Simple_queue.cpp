#include <iostream>
using namespace std;
int arr[100], size = sizeof(arr) / sizeof(arr[0]), front = -1, rare = -1;
int enqueue()
{
    int data;
    cout << "Enter the data : ";
    cin >> data;
    if (rare >= size - 1)
    {
        cout << "Queue is overflow\n";
        return -1;
    }
    if (front == -1)
    {
        front = 0; // Initialize front to 0 when first element is inserted
    }
    arr[++rare] = data;
    return 0;
}
int dequeue()
{
    if (rare == -1 || front > rare)
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
    if (rare == -1 || front > rare || rare >= size - 1)
    {
        cout << "Queue is overflow or Underflow";
        return -1;
    }
    else
    {
        for (int i = front; i <= rare; i++)
        {
            cout << arr[i] << " ";
        }
        retun 0;
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "\n1.for instion in the queue : \n";
        cout << "2.for deletion in t he queue : \n";
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