# Trees in C++

## Table of Contents
1. [Introduction](#introduction)
2. [Types of Trees](#types-of-trees)
3. [Binary Trees](#binary-trees)
   - [Definition](#definition)
   - [Representation](#representation)
   - [Operations](#operations)
     - [Insertion](#insertion)
     - [Deletion](#deletion)
     - [Traversal](#traversal)
4. [Binary Search Trees (BST)](#binary-search-trees-bst)
   - [Definition](#definition-1)
   - [Operations](#operations-1)
     - [Insertion](#insertion-1)
     - [Deletion](#deletion-1)
     - [Search](#search)
5. [Balanced Trees](#balanced-trees)
   - [AVL Trees](#avl-trees)
   - [Red-Black Trees](#red-black-trees)
6. [Tree Traversals](#tree-traversals)
   - [Inorder](#inorder)
   - [Preorder](#preorder)
   - [Postorder](#postorder)
   - [Level Order](#level-order)
7. [Advantages and Disadvantages](#advantages-and-disadvantages)
8. [Conclusion](#conclusion)

## Introduction
Trees are a fundamental data structure in computer science used to model hierarchical relationships. A tree consists of nodes with a parent-child relationship. The topmost node is called the root, and nodes without children are called leaves.

## Types of Trees
- **Binary Trees**
- **Binary Search Trees (BST)**
- **AVL Trees**
- **Red-Black Trees**
- **N-ary Trees**
- **Trie**
- **Segment Trees**

## Binary Trees

### Definition
A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.

### Representation
```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
```


## Operations
 ### Insertion
```cpp

Node* insert(Node* root, int val) {
    if (!root) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}
```
### Deletion
```cpp

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

```
## Traversal
### Inorder
```cpp

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
```
 
 
 
### Preorder
```cpp

void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

```
### Postorder
```cpp

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
```
### Level Order
``` cpp

void levelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

```

## Binary Search Trees (BST)
### Definition
A Binary Search Tree (BST) is a binary tree with the following properties:

The left subtree of a node contains only nodes with keys less than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
Both the left and right subtrees must also be binary search trees.
## Operations
### Insertion
```cpp

Node* insertBST(Node* root, int val) {
    if (!root) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    return root;
}
```

### Deletion
```cpp

Node* deleteBST(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) {
        root->left = deleteBST(root->left, key);
    } else if (key > root->data) {
        root->right = deleteBST(root->right, key);
    } else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}
```

### Search
```cpp

Node* searchBST(Node* root, int key) {
    if (!root || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return searchBST(root->left, key);
    }
    return searchBST(root->right, key);
}
```
## Balanced Trees
### AVL Trees
AVL trees are self-balancing binary search trees. Each node maintains an extra piece of information called the balance factor, which ensures the tree remains balanced during insertions and deletions.

### Red-Black Trees
Red-Black Trees are a type of self-balancing binary search tree. They ensure the tree remains balanced through a set of properties that involve coloring nodes red or black and performing rotations.

## Tree Traversals
### Inorder
Inorder traversal visits nodes in the following order: left subtree, root, right subtree.

### Preorder
Preorder traversal visits nodes in the following order: root, left subtree, right subtree.

### Postorder
Postorder traversal visits nodes in the following order: left subtree, right subtree, root.

### Level Order
Level order traversal visits nodes level by level from top to bottom and left to right.

## Advantages and Disadvantages
### Advantages
- Hierarchical Data Representation: Trees naturally represent hierarchical data such as file systems, organizational structures, etc.
- Efficient Search and Insert: Binary Search Trees (BST) provide efficient search, insert, and delete operations.
### Disadvantages
- Complexity: Trees can be more complex to implement compared to linear data structures.
- Balancing Issues: Maintaining a balanced tree (like AVL or Red-Black Tree) requires additional operations during insertions and deletions.

## Conclusion
Trees are versatile data structures used for representing hierarchical data. Understanding different types of trees and their operations helps in choosing the right tree structure for specific applications. Binary trees, binary search trees, AVL trees, and Red-Black trees each offer unique benefits and are suited for different scenarios.