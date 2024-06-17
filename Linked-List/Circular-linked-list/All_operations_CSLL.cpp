#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;

void insertion_at_beginning()
{
    Node *newNode = new Node();
    int newData;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;

    if (head == nullptr)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }
}

void insertion_at_last()
{
    Node *newNode = new Node();
    int newData;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;

    if (head == nullptr)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = head;
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

    if (head == nullptr)
    {
        if (position == 0)
        {
            newNode->next = newNode;
            head = newNode;
        }
        else
        {
            cout << "Position out of range!" << endl;
            delete newNode;
            return -1;
        }
    }
    else if (position == 0)
    {
        insertion_at_beginning();
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
            if (temp == head)
            {
                cout << "Position out of range!" << endl;
                delete newNode;
                return -1;
            }
        }
        newNode->next = temp->next;
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
    if (head->next == head)
    {
        head = nullptr;
    }
    else
    {
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
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

    if (head->next == head)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = head;
    }
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
    for (int i = 0; temp->next != head && i < position - 1; i++)
    {
        temp = temp->next;
        if (temp->next == head)
        {
            cout << "Position out of range!" << endl;
            return -1;
        }
    }

    if (temp->next == head)
    {
        cout << "Position out of range!" << endl;
        return -1;
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
    return 0;
}

void traversal()
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "head" << endl;
}

void find_node_data()
{
    int value;
    cout << "\nEnter data to find: ";
    cin >> value;

    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *temp = head;
    int position = 0;
    do
    {
        if (temp->data == value)
        {
            cout << "Data found at position: " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    } while (temp != head);
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
