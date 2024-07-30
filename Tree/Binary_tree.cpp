#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *root = nullptr;
void insertion_in_Binary_tree(int newdata)
{
    Node *newnode = new Node();
    newnode->data = newdata;
    newnode->left = nullptr;
    newnode->right = nullptr;

    if (root == nullptr)
    {
        root = newnode;
    }
    else
    {
        Node *current = root;
        Node *parent = nullptr;

        while (current != nullptr)
        {
            parent = current;
            if (newdata < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }

        if (newdata < parent->data)
        {
            parent->left = newnode;
        }
        else
        {
            parent->right = newnode;
        }
    }
}
void pre_order_traversal(struct Node *ptr)
{
    if (ptr != nullptr)
    {
        cout << ptr->data << " ";
        pre_order_traversal(ptr->left);
        pre_order_traversal(ptr->right);
    }
}
void in_order_traversal(struct Node *ptr)
{
    if (ptr != nullptr)
    {
        in_order_traversal(ptr->left);
        cout << ptr->data << " ";
        in_order_traversal(ptr->right);
    }
}
void post_order_traversal(struct Node *ptr)
{
    if (ptr != nullptr)
    {
        post_order_traversal(ptr->left);
        post_order_traversal(ptr->right);
        cout << ptr->data << " ";
    }
}
int main()
{
    insertion_in_Binary_tree(12);
    insertion_in_Binary_tree(13);
    insertion_in_Binary_tree(1);
    insertion_in_Binary_tree(123);
    insertion_in_Binary_tree(1232);
    insertion_in_Binary_tree(15);
    insertion_in_Binary_tree(16);
    insertion_in_Binary_tree(3);
    insertion_in_Binary_tree(5);
    pre_order_traversal(root);
    cout << endl;
    in_order_traversal(root);
    cout << endl;
    post_order_traversal(root);
    return 0;
}