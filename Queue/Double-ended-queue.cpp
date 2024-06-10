/*?Documentation left?*/
/*?Incomplete operations?*/

#include <iostream>
using namespace std;
int arr[100], size = sizeof(arr) / sizeof(arr[0]), front = -1, rare = -1;
int enqueue_from_rare()
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
int dequeue_from_front()
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
int display_from_front()
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
        return 0;
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "\n1.for instion in the queue from rare: \n";
        cout << "2.for deletion in the queue from front : \n";
        // cout << "3.for instion in the queue from front : \n";
        // cout << "4.for deletion in the queue from rare : \n";
        cout << "5.for display from front :\n";
        // cout << "6.for display from rare :\n";
        cout << "7.to Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue_from_rare();
            break;
        case 2:
            dequeue_from_front();
            break;
        // case 3:
        //     enqueue_from_front();
        //     break;
        // case 4:
        //     dequeue_from_end();
        //     break;
        case 5:
            display_from_front();
            break;
        // case 6:
        //     display_from_rare();
        //     break;
        case 7:
            exit(0);
        default:
            cout << "You Entered wrong input! please try again";
            break;
        }
    }
    return 0;
}