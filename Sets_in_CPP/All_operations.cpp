/*
STL stands for the Standard Template Library. 
It is a powerful set of C++ template classes to provide 
general-purpose classes and functions with templates that implement many popular and 
commonly used algorithms and data structures like vectors, lists, queues, and stacks. 
The library provides several generic classes and functions that can be used to manage data structures 
and perform algorithms, which can be customized to fit specific data types through the use of templates.

*/

#include <iostream>
#include <set>

using namespace std;

void operateOnIntSet() {
    // Declaration of set
    set<int> intSet;

    // Inserting elements
    intSet.insert(10);
    intSet.insert(20);
    intSet.insert(30);
    intSet.insert(40);
    intSet.insert(50);

    // Displaying elements
    cout << "Elements of int set: ";
    for (int elem : intSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Finding an element
    int searchElem = 30;
    auto it = intSet.find(searchElem);
    if (it != intSet.end()) {
        cout << "Element " << searchElem << " found in the int set." << endl;
    } else {
        cout << "Element " << searchElem << " not found in the int set." << endl;
    }

    // Erasing an element
    intSet.erase(searchElem);
    cout << "Elements of int set after erasing " << searchElem << ": ";
    for (int elem : intSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Checking size of the set
    cout << "Size of the int set: " << intSet.size() << endl;

    // Checking if set is empty
    if (intSet.empty()) {
        cout << "Int set is empty." << endl;
    } else {
        cout << "Int set is not empty." << endl;
    }

    // Clearing all elements
    intSet.clear();
    cout << "Size of the int set after clearing: " << intSet.size() << endl;

    // More operations:
    // Insert with hint
    intSet.insert(intSet.end(), 60);
    intSet.insert(intSet.end(), 70);

    // Emplace element
    intSet.emplace(80);

    // Using lower_bound and upper_bound
    intSet.insert(90);
    intSet.insert(100);

    auto lower = intSet.lower_bound(70);
    auto upper = intSet.upper_bound(90);

    cout << "Lower bound of 70: " << *lower << endl;
    cout << "Upper bound of 90: " << *upper << endl;

    // Displaying final elements
    cout << "Final elements of int set: ";
    for (int elem : intSet) {
        cout << elem << " ";
    }
    cout << endl;
}

void operateOnCharSet() {
    // Declaration of set
    set<char> charSet;

    // Inserting elements
    charSet.insert('a');
    charSet.insert('b');
    charSet.insert('c');
    charSet.insert('d');
    charSet.insert('e');

    // Displaying elements
    cout << "Elements of char set: ";
    for (char elem : charSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Finding an element
    char searchElem = 'c';
    auto it = charSet.find(searchElem);
    if (it != charSet.end()) {
        cout << "Element " << searchElem << " found in the char set." << endl;
    } else {
        cout << "Element " << searchElem << " not found in the char set." << endl;
    }

    // Erasing an element
    charSet.erase(searchElem);
    cout << "Elements of char set after erasing " << searchElem << ": ";
    for (char elem : charSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Checking size of the set
    cout << "Size of the char set: " << charSet.size() << endl;

    // Checking if set is empty
    if (charSet.empty()) {
        cout << "Char set is empty." << endl;
    } else {
        cout << "Char set is not empty." << endl;
    }

    // Clearing all elements
    charSet.clear();
    cout << "Size of the char set after clearing: " << charSet.size() << endl;

    // More operations:
    // Insert with hint
    charSet.insert(charSet.end(), 'f');
    charSet.insert(charSet.end(), 'g');

    // Emplace element
    charSet.emplace('h');

    // Using lower_bound and upper_bound
    charSet.insert('i');
    charSet.insert('j');

    auto lower = charSet.lower_bound('g');
    auto upper = charSet.upper_bound('i');

    cout << "Lower bound of 'g': " << *lower << endl;
    cout << "Upper bound of 'i': " << *upper << endl;

    // Displaying final elements
    cout << "Final elements of char set: ";
    for (char elem : charSet) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    cout << "Operations on int set:" << endl;
    operateOnIntSet();

    cout << "\nOperations on char set:" << endl;
    operateOnCharSet();

    return 0;
}
