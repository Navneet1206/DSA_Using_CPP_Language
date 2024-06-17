#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head = nullptr;

void insertion_at_beginning()
{
    Node *newNode = new Node();
    int newData;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr)
    {
        head->prev = newNode;
    }
    head = newNode;
}

void insertion_at_last()
{
    Node *newNode = new Node();
    int newData;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        newNode->prev = nullptr;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int insertion_at_random_position()
{
    Node *newNode = new Node();
    int newData, position;
    cout << "\nEnter your choice position: ";
    cin >> position;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;

    if (position < 0)
    {
        cout << "Invalid position!" << endl;
        delete newNode;
        return -1;
    }

    if (head == nullptr && position == 0)
    {
        newNode->next = nullptr;
        newNode->prev = nullptr;
        head = newNode;
    }
    else if (position == 0)
    {
        newNode->next = head;
        newNode->prev = nullptr;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == nullptr)
            {
                cout << "Position out of range!" << endl;
                delete newNode;
                return -1;
            }
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Position out of range!" << endl;
            delete newNode;
            return -1;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    return 0;
}

int deletion_from_start()
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return -1;
    }
    Node *temp = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete temp;
    return 0;
}

int deletion_from_end()
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return -1;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return 0;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
    return 0;
}

int deletion_from_random_position()
{
    int position;
    cout << "\nEnter position to delete: ";
    cin >> position;

    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return -1;
    }

    if (position == 0)
    {
        return deletion_from_start();
    }

    Node *temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Position out of range!" << endl;
        return -1;
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    if (delNode->next != nullptr)
    {
        delNode->next->prev = temp;
    }
    delete delNode;
    return 0;
}

void traversal()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

void find_node_data()
{
    int value;
    cout << "\nEnter data to find: ";
    cin >> value;
    Node *temp = head;
    int position = 0;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            cout << "Data found at position: " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }
    cout << "Data not found in the list." << endl;
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\n1. For insertion at beginning\n";
        cout << "2. For insertion at last\n";
        cout << "3. For insertion at random position\n";
        cout << "4. For deletion from start\n";
        cout << "5. For deletion from end\n";
        cout << "6. For deletion from random position\n";
        cout << "7. For traversal\n";
        cout << "8. For finding node data\n";
        cout << "9. For exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertion_at_beginning();
            break;
        case 2:
            insertion_at_last();
            break;
        case 3:
            insertion_at_random_position();
            break;
        case 4:
            deletion_from_start();
            break;
        case 5:
            deletion_from_end();
            break;
        case 6:
            deletion_from_random_position();
            break;
        case 7:
            traversal();
            break;
        case 8:
            find_node_data();
            break;
        case 9:
            exit(0);
        default:
            cout << "\nYou entered an incorrect number! Please try again.";
            break;
        }
    }
    return 0;
}
