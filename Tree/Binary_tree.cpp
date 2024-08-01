#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* root = nullptr;

// Function to insert a new node in the binary tree
void insertion_in_Binary_tree(int newdata) {
    Node* newnode = new Node();
    newnode->data = newdata;
    newnode->left = nullptr;
    newnode->right = nullptr;

    if (root == nullptr) {
        root = newnode;
    } else {
        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (newdata < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        if (newdata < parent->data) {
            parent->left = newnode;
        } else {
            parent->right = newnode;
        }
    }
}

// Function to search for a node in the binary tree
bool search_in_Binary_tree(int key) {
    Node* current = root;
    while (current != nullptr) {
        if (current->data == key)
            return true;
        else if (key < current->data)
            current = current->left;
        else
            current = current->right;
    }
    return false;
}

// Function to find the minimum value node
Node* findMin(Node* node) {
    while (node->left != nullptr)
        node = node->left;
    return node;
}

// Function to delete a node from the binary tree
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function for pre-order traversal
void pre_order_traversal(Node* ptr) {
    if (ptr != nullptr) {
        cout << ptr->data << " ";
        pre_order_traversal(ptr->left);
        pre_order_traversal(ptr->right);
    }
}

// Function for in-order traversal
void in_order_traversal(Node* ptr) {
    if (ptr != nullptr) {
        in_order_traversal(ptr->left);
        cout << ptr->data << " ";
        in_order_traversal(ptr->right);
    }
}

// Function for post-order traversal
void post_order_traversal(Node* ptr) {
    if (ptr != nullptr) {
        post_order_traversal(ptr->left);
        post_order_traversal(ptr->right);
        cout << ptr->data << " ";
    }
}

int main() {
    insertion_in_Binary_tree(12);
    insertion_in_Binary_tree(13);
    insertion_in_Binary_tree(1);
    insertion_in_Binary_tree(123);
    insertion_in_Binary_tree(1232);
    insertion_in_Binary_tree(15);
    insertion_in_Binary_tree(16);
    insertion_in_Binary_tree(3);
    insertion_in_Binary_tree(5);

    cout << "Pre-order traversal: ";
    pre_order_traversal(root);
    cout << endl;

    cout << "In-order traversal: ";
    in_order_traversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    post_order_traversal(root);
    cout << endl;

    cout << "Searching for 15: " << (search_in_Binary_tree(15) ? "Found" : "Not Found") << endl;
    cout << "Searching for 100: " << (search_in_Binary_tree(100) ? "Found" : "Not Found") << endl;

    cout << "Deleting 1232" << endl;
    root = deleteNode(root, 1232);
    
    cout << "In-order traversal after deletion: ";
    in_order_traversal(root);
    cout << endl;

    return 0;
}
