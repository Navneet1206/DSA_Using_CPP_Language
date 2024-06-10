#include <iostream>
using namespace std;

int arr[100];
int size = sizeof(arr) / sizeof(arr[0]);
int front = -1, rear = -1;

int enqueue_from_rear() {
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if (rear >= size - 1) {
        cout << "Queue is overflow\n";
        return -1;
    }
    if (front == -1) {
        front = 0; // Initialize front to 0 when first element is inserted
    }
    arr[++rear] = data;
    return 0;
}

int dequeue_from_front() {
    if (rear == -1 || front > rear) {
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue element " << arr[front] << " deleted successfully from index " << front << "\n";
    front++;
    return 0;
}

int enqueue_from_front() {
    int data;
    cout << "Enter the queue element: ";
    cin >> data;
    if (front == 0) {
        cout << "Queue is overflow\n";
        return -1;
    }
    if (front == -1) {
        front = rear = size - 1;
        arr[front] = data;
    } else {
        arr[--front] = data;
    }
    return 0;
}

int dequeue_from_rear() {
    if (rear == -1 || front > rear) {
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue element " << arr[rear] << " deleted successfully from index " << rear << "\n";
    rear--;
    return 0;
}

int display_from_front() {
    if (rear == -1 || front > rear) {
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue elements from front: ";
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

int display_from_rear() {
    if (rear == -1 || front > rear) {
        cout << "Queue is underflow\n";
        return -1;
    }
    cout << "Queue elements from rear: ";
    for (int i = rear; i >= front; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

int main() {
    int choice;
    while (1) {
        cout << "\n1. Insert in the queue from rear\n";
        cout << "2. Delete in the queue from front\n";
        cout << "3. Insert in the queue from front\n";
        cout << "4. Delete in the queue from rear\n";
        cout << "5. Display from front\n";
        cout << "6. Display from rear\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                enqueue_from_rear();
                break;
            case 2:
                dequeue_from_front();
                break;
            case 3:
                enqueue_from_front();
                break;
            case 4:
                dequeue_from_rear();
                break;
            case 5:
                display_from_front();
                break;
            case 6:
                display_from_rear();
                break;
            case 7:
                exit(0);
            default:
                cout << "You entered a wrong input! Please try again.\n";
                break;
        }
    }
    return 0;
}
