#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insertion_at_beginning(node *&head, int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = head;
    head = newnode;
}

void insertion_at_end(node *&head, int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    node *last = head;
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = newnode;
}

void insertion_at_random_position(node *&head, int newdata, int position)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = nullptr;
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    if (position == 0)
    { // If inserting at the beginning
        newnode->next = head;
        head = newnode;
        return;
    }

    node *temp = head;
    for (int i = 0; i < position - 1 && temp->next != nullptr; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void delete_at_beginning(node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    temp = nullptr; // Avoid dangling pointer
}

void delete_at_end(node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr; // Avoid dangling pointer
}

void delete_at_random_position(node *&head, int position)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (position == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        temp = nullptr; // Avoid dangling pointer
        return;
    }

    node *temp = head;
    for (int i = 0; i < position - 1 && temp->next != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "Position out of range." << endl;
        return;
    }

    node *node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    delete node_to_delete;
    node_to_delete = nullptr; // Avoid dangling pointer
}

void display(node *temp)
{
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main()
{
    node *head = nullptr;
    insertion_at_beginning(head, 0);
    insertion_at_beginning(head, 10);
    insertion_at_random_position(head, 80, 3);
    insertion_at_end(head, 20);
    insertion_at_end(head, 30);
    insertion_at_end(head, 40);
    insertion_at_end(head, 50);
    cout << "Linked list \n";
    display(head);

    delete_at_beginning(head);
    cout << "After deleting at beginning: \n";
    display(head);

    delete_at_end(head);
    cout << "After deleting at end: \n";
    display(head);

    delete_at_random_position(head, 2);
    cout << "After deleting at position 2: \n";
    display(head);

    return 0;
}
