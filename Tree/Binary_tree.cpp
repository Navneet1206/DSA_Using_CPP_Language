// This program is made by me for testing how LL works for the tree this program is in the development

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *head = nullptr;
void insertion_in_Binary_tree(int newdata)
{
    Node *newnode = new Node();
    newnode->data = newdata;
    newnode->left = nullptr;
    newnode->right = nullptr;

    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        if (newnode->data > head->data)
        {
            head->right = newnode;
        }
        else
        {
            head->left = newnode;
        }
    }
}
void traversal_of_tree()
{

    Node *temp1 = head;
    Node *temp2 = head;

    while (temp1->left != nullptr)
    {
        temp1 = temp1->left;
    }
    cout << temp1->data << " ";
    cout << head->data << " ";
    while (temp2->right != nullptr)
    {
        temp2 = temp2->right;
    }
    cout << temp2->data;
}
int main()
{
    insertion_in_Binary_tree(12);
    insertion_in_Binary_tree(13);
    insertion_in_Binary_tree(1);
    traversal_of_tree();
    return 0;
}