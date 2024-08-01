#include <iostream>
#include <vector>
using namespace std;

class BPTreeNode {
public:
    vector<int> keys;
    vector<BPTreeNode*> children;
    BPTreeNode* next;
    bool leaf;
    BPTreeNode(bool leaf);
};

class BPTree {
    BPTreeNode* root;
    int t;
public:
    BPTree(int _t) {
        root = nullptr;
        t = _t;
    }

    void insert(int k);
    void traverse();

private:
    BPTreeNode* insertInternal(BPTreeNode* node, int k, int& upKey);
    void splitLeaf(BPTreeNode* leaf, int k, int& upKey);
    void splitNonLeaf(BPTreeNode* node, int& upKey);
    void traverse(BPTreeNode* node);
};

BPTreeNode::BPTreeNode(bool leaf1) {
    leaf = leaf1;
    next = nullptr;
}

void BPTree::traverse() {
    if (root != nullptr) traverse(root);
}

void BPTree::traverse(BPTreeNode* node) {
    if (node == nullptr) return;

    for (int i = 0; i < node->keys.size(); i++) {
        if (!node->leaf) traverse(node->children[i]);
        cout << node->keys[i] << " ";
    }

    if (!node->leaf) traverse(node->children[node->keys.size()]);
}

void BPTree::insert(int k) {
    if (root == nullptr) {
        root = new BPTreeNode(true);
        root->keys.push_back(k);
    } else {
        int upKey;
        BPTreeNode* newNode = insertInternal(root, k, upKey);

        if (newNode != nullptr) {
            BPTreeNode* newRoot = new BPTreeNode(false);
            newRoot->keys.push_back(upKey);
            newRoot->children.push_back(root);
            newRoot->children.push_back(newNode);
            root = newRoot;
        }
    }
}

BPTreeNode* BPTree::insertInternal(BPTreeNode* node, int k, int& upKey) {
    if (node->leaf) {
        if (node->keys.size() < 2 * t - 1) {
            node->keys.insert(lower_bound(node->keys.begin(), node->keys.end(), k), k);
            return nullptr;
        } else {
            splitLeaf(node, k, upKey);
            return new BPTreeNode(true);
        }
    } else {
        int idx = upper_bound(node->keys.begin(), node->keys.end(), k) - node->keys.begin();
        BPTreeNode* newNode = insertInternal(node->children[idx], k, upKey);

        if (newNode != nullptr) {
            if (node->keys.size() < 2 * t - 1) {
                node->keys.insert(node->keys.begin() + idx, upKey);
                node->children.insert(node->children.begin() + idx + 1, newNode);
                return nullptr;
            } else {
                splitNonLeaf(node, upKey);
                return new BPTreeNode(false);
            }
        }

        return nullptr;
    }
}

void BPTree::splitLeaf(BPTreeNode* leaf, int k, int& upKey) {
    vector<int> tempKeys = leaf->keys;
    tempKeys.insert(lower_bound(tempKeys.begin(), tempKeys.end(), k), k);

    BPTreeNode* newLeaf = new BPTreeNode(true);
    leaf->keys.resize(t);
    newLeaf->keys.assign(tempKeys.begin() + t, tempKeys.end());

    upKey = newLeaf->keys.front();

    newLeaf->next = leaf->next;
    leaf->next = newLeaf;
}

void BPTree::splitNonLeaf(BPTreeNode* node, int& upKey) {
    vector<int> tempKeys = node->keys;
    tempKeys.insert(lower_bound(tempKeys.begin(), tempKeys.end(), upKey), upKey);

    vector<BPTreeNode*> tempChildren = node->children;

    int midIdx = (tempKeys.size() - 1) / 2;
    upKey = tempKeys[midIdx];

    BPTreeNode* newNode = new BPTreeNode(false);
    newNode->keys.assign(tempKeys.begin() + midIdx + 1, tempKeys.end());
    newNode->children.assign(tempChildren.begin() + midIdx + 1, tempChildren.end());

    node->keys.assign(tempKeys.begin(), tempKeys.begin() + midIdx);
    node->children.assign(tempChildren.begin(), tempChildren.begin() + midIdx + 1);
}

int main() {
    BPTree t(3);

    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);
    t.insert(30);
    t.insert(7);
    t.insert(17);

    cout << "Traversal of the constructed B+ tree is ";
    t.traverse();

    return 0;
}
