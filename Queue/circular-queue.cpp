#include <iostream>
using namespace std;

// Circular queue implementation
int arr[100];
int size = sizeof(arr) / sizeof(arr[0]);
int front = -1, rear = -1;

// Function to insert an element into the circular queue
int enqueue()
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if ((rear + 1) % size == front)
    { // Check for queue overflow
        cout << "Queue is overflow\n";
        return -1;
    }
    if (front == -1)
    { // Initialize front when first element is inserted
        front = 0;
    }
    rear = (rear + 1) % size; // Move rear to the next position
    arr[rear] = data;
    return 0;
}

// Function to delete an element from the circular queue
int dequeue()
{
    if (front == -1)
    { // Check for queue underflow
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue element " << arr[front] << " deleted successfully from index " << front << "\n";
    if (front == rear)
    { // Queue has only one element
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size; // Move front to the next position
    }
    return 0;
}

// Function to display elements of the circular queue
int display()
{
    if (front == -1)
    { // Check for queue underflow
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true)
    {
        cout << arr[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    cout << "\n";
    return 0;
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\n1. Insert in the queue\n";
        cout << "2. Delete from the queue\n";
        cout << "3. Display the queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
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
            cout << "You entered a wrong input! Please try again\n";
            break;
        }
    }
    return 0;
}
