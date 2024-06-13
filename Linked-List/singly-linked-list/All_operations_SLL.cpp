#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertion_at_begning() {
    Node* newNode = new Node();
    int newData;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

int insertion_at_last() {
    Node* newNode = new Node();
    int newData;
    Node* temp;
    cout << "\nEnter data: ";
    cin >> newData;
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return 0;
}

int insertion_at_random_position() {
    Node* newNode = new Node();
    int newData, position;
    Node* temp;

    cout << "\nEnter your choice position: ";
    cin >> position;
    cout << "\nEnter data: ";
    cin >> newData;

    newNode->data = newData;
    newNode->next = nullptr;

    if (position < 0) {
        cout << "Invalid position!" << endl;
        return -1; // Return error code
    }

    if (head == nullptr && position == 0) {
        head = newNode;
    } else if (position == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;
        for (int i = 0; i < position - 1; i++) {
            if (temp == nullptr) {
                cout << "Position out of range!" << endl;
                delete newNode; // Free the allocated memory
                return -1; // Return error code
            }
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            delete newNode; // Free the allocated memory
            return -1; // Return error code
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    return 0;
}

int deletion_from_start() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return -1;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return 0;
}

int deletion_from_end() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return -1;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return 0;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return 0;
}

int deletion_from_random_position() {
    int position;
    cout << "\nEnter position to delete: ";
    cin >> position;

    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return -1;
    }
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return 0;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range!" << endl;
        return -1;
    }

    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
    return 0;
}

void traversal() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

void find_node_data() {
    int value;
    cout << "\nEnter data to find: ";
    cin >> value;
    Node* temp = head;
    int position = 0;
    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Data found at position: " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }
    cout << "Data not found in the list." << endl;
}

int main() {
    int choice;
    while (1) {
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

        switch (choice) {
            case 1:
                insertion_at_begning();
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
